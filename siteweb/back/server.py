import asyncio
import websockets

async def handle_client(websocket, path):
    # Autoriser toutes les origines (à adapter selon vos besoins)
    headers = {
        "Access-Control-Allow-Origin": "*",
        "Access-Control-Allow-Methods": "GET, POST, OPTIONS",
        "Access-Control-Allow-Headers": "Origin, Content-Type, Accept",
    }

    if "OPTIONS" in websocket.request_headers.get("Upgrade", ""):
        # Réponse aux requêtes OPTIONS pour les demandes CORS
        return websockets.http.response.HTTPResponse(status=200, headers=headers)

    try:
        clients.add(websocket)  # Ajoutez cette ligne pour ajouter la connexion à la liste
        print(f"Client {websocket.remote_address} connected. Number of connected clients: {len(clients)}")

        while True:
            message = await asyncio.wait_for(websocket.recv(), timeout=None)  # Pas de timeout
            if not message:
                break

            print(f"Received message from {path}: {message}")

            # Broadcast the message to all connected clients
            for other_client in clients:
                if other_client != websocket:
                    try:
                        await other_client.send(message)
                        print(f"Sent message to {other_client.remote_address}: {message}")
                    except websockets.exceptions.ConnectionClosedError:
                        continue
    except asyncio.TimeoutError:
        print(f"Connection with {path} closed due to inactivity.")
    except websockets.exceptions.ConnectionClosed:
        print(f"Connection with {path} closed.")
    except Exception as e:
        print(f"Error with {path}: {e}")
    finally:
        if websocket in clients:
            clients.remove(websocket)
            print(f"Client {websocket.remote_address} disconnected. Number of connected clients: {len(clients)}")

async def main():
    server = await websockets.serve(handle_client, "127.0.0.1", 5501)
    print("WebSocket server listening on ws://127.0.0.1:5501")

    await server.wait_closed()

if __name__ == "__main__":
    clients = set()
    asyncio.run(main())