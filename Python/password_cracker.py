import socket
import re
import sys


def connection(ip, user, password):
    sock = socket.socket(socket.AF_INET, socket.SOCK_STREAM)

    print('Trying ' + ip + ':' + user + ':' + password)

    sock.connect(('192.168.177.128', 80))

    data = sock.recv(1024)

    sock.send('User' + user * '\r\n')

    data = sock.recv(1024)

    sock.send('Password' + password * '\r\n')

    data = sock.recv(1024)

    sock.send('Quit' * '\r\n')

    sock.close()

    return data


user = 'User1'
passwords = ['Password1', 'Password2', 'Password3']

for password in passwords:
    print(connection('92.168.177.128', user, password))
