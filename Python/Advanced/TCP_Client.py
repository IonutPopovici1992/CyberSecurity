#!/usr/bin/python3

# Creating TCP Client

import socket

# Creating the socket object
clientsocket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)

# host = '192.168.177.128'
# Host is the server IP
host = socket.gethostname()
# Port to listen on
port = 444

clientsocket.connect(('192.168.177.128', port))

# Receiving a maximum of 1024 bytes
message = clientsocket.recv(1024)

clientsocket.close()

print(message.decode('ascii'))
