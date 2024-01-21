import socket

# Define the server's IP address and port
server_ip = 'server_ip_address'  # Replace with the server's IP address
port = 12345  # Must match the server's port

# Create a socket object
client_socket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)

# Connect to the server
client_socket.connect((server_ip, port))

print(f"Connected to {server_ip}:{port}")

# Receive data from the server
data = client_socket.recv(1024)
print(f"Server says: {data.decode('utf-8')}")

# Send a message to the server
message_to_send = "Hello, server!"
client_socket.send(message_to_send.encode('utf-8'))

# Close the socket
client_socket.close()
