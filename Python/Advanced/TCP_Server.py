#!/usr/bin/python3

# Creating TCP Server & Understanding Sockets

import socket

# Creating the socket object
serversocket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)

# host = '192.168.177.128'
# Host is the server IP
host = socket.gethostname()
# Port to listen on
port = 444

# Binding to socket
# Host will be replaced/ substituted with IP, if changed and not running on host
serversocket.bind((host, port))

# Starting TCP listener
serversocket.listen(3)

while True:
    # Starting the connection
    clientsocket, address = serversocket.accept()

    print("Received connection from " % str(address))

    # Message sent to client after successful connection
    message = "Hello! Thank you for connecting to the server." + "\r\n"

    clientsocket.send(message)

    clientsocket.close()
