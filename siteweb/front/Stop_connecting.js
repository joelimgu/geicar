
// Your WebSocket client code
const socket = new WebSocket("ws://autocab.joel.rs/websocket/");

// JavaScript code to handle event and toggle images
function handleMessage(event) {
    // Log the received message
    console.log("Received message:", event.data);

    // Get the message container elements
    var messageContainer = document.getElementById('message-container');
    var messageContainerWait = document.getElementById('message-container-wait');

    // Parse the message from the event data
    var message = event.data;

    // Create an image element
    var imageElement = document.createElement('img');

    // Set the default image source
    imageElement.src = 'switch_off1.png';

    // Set the image size and other styles
    imageElement.style.width = '40px'; // Set the width of the image
    imageElement.style.height = 'auto'; // Maintain the aspect ratio
    imageElement.style.marginTop = '0px'; // Add spacing below the image

    // Check the message value
    if (message === 'True') {
        // Change the image source to switch_on.png
        imageElement.src = 'switch_on1.png';
    }

    // Add logic to check the server message before allowing redirection
    if (message === 'allow-redirection') {
        // Redirect the user to Waiting.html
        window.location.href = "Waiting.html";
    } else {
        // If not allowed, disable the button and show a message
        var startButton = document.getElementById('startButton');
        startButton.disabled = true;
    }

    // Clear the message container and append the image
    messageContainer.innerHTML = '';
    messageContainer.appendChild(imageElement);
}

// Set up WebSocket event listener for message handling
socket.onmessage = handleMessage;

socket.onclose = function (event) {
    console.log("WebSocket connection closed.");
};

socket.onerror = function (event) {
    console.error("WebSocket error:", event);
};


// Call handleMessage with a predefined message when the page is ready
document.addEventListener('DOMContentLoaded', function () {
    // Assuming 'False' as the initial state, adjust this if needed
    handleMessage({ data: 'False' });
});
