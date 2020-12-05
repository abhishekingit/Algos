from decimal import Decimal 
def gcd(a, b):
    if b == 0:
        return a
    else:
        return gcd(b, a%b)
p = int(input('Enter the value of p'))
q = int(input('Enter the value of q'))
num = int(input('Enter the value of key'))
n = p*q
phi = (p-1)*(q-1)
print(phi)

for e in range(2, phi):
    if gcd(e, phi) == 1:
        break
print(e)

for k in range(1, 20):
    t = k*phi + 1
    if t%e == 0:
        d = int(t/e)
        break

print(d)

#Encryption
ciph = Decimal(0)
ciph = pow(num, e)
ciphText = ciph % n

#Decryption
decryp = Decimal(0)
decryp = pow(ciphText, d)
decryptText = decryp % n

print('ciphertext is ' + str(ciphText) + '\noriginal text is ' + str(decryptText))

