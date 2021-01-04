from socket import socket
import sys

from hashlib import sha1

hash = sha1()

s = socket()

print("socket succesfully created")

data = input("Enter the string : ").encode()

hash.update(data)

port = 6180

s.connect(("localhost",port))
s.send(data.ljust(4096))
s.send(str.encode(hash.hexdigest()).ljust(4096))
print(s.recv(4096).decode().strip())
print("connection over!!")
