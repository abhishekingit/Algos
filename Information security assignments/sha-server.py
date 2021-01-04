from socket import socket
from hashlib import sha1

hash = sha1()

s = socket()

print("socket succesfully created")

port = 6180

s.bind(("",port))
print(f"Socket binded to {port}")

s.listen(5)
print("Socket is listening")

try:
    while True:
        c, addr = s.accept()
        print("Got connection from ",addr)
        data = c.recv(4096).decode().strip()
        print(f"String is {data}")
        received_hash = c.recv(4096).decode().strip()
        hash.update(data.encode())
        computed_hash = hash.hexdigest()
        if received_hash == computed_hash:
            ret = f"SHA-1 of received data verified!\nReceived data - {data}"
        else:
            ret = f"SHA-1 of received data is incorrect\nShould be {received_hash}, is {computed_hash}"
        ret += "\nThank you for connecting"
        c.send(ret.encode().ljust(4096))
except KeyboardInterrupt:
    s.close()
    print("closed socket")
except Exception as e:
    s.close()
    print(e)
    print(e.body)


