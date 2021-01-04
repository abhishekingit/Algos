import hashlib

orig = input("Enter the path of the text file : ")

path = input("Enter the path of the file to be checked ")

text_file1 = open(orig).read()
text_file2 = open(path).read()

x = hashlib.sha1(text_file1.encode()).hexdigest()
y = hashlib.sha1(text_file2.encode()).hexdigest()

print("Original Hash ",x)
print("New Hash ",y)

if(x==y):
    print("File is ok")
else:
    print("File is tampered")

# PS C:\Users\hp\Desktop\abhishekingit\Dev\Algos\Information security assignments> python3 sha.py
# Enter the path of the text file : C:\Users\hp\Desktop\abhishekingit\Dev\Algos\Information security assignments\abc.txt
# Enter the path of the file to be checked C:\Users\hp\Desktop\abhishekingit\Dev\Algos\Information security assignments\def.txt
# Original Hash  8ddf5bb6875c9ced48460afa70c10a883aa094d0
# New Hash  8ddf5bb6875c9ced48460afa70c10a883aa094d0     
# File is ok


# PS C:\Users\hp\Desktop\abhishekingit\Dev\Algos\Information security assignments> python3 sha.py
# Enter the path of the text file : C:\Users\hp\Desktop\abhishekingit\Dev\Algos\Information security assignments\abc.txt
# Enter the path of the file to be checked C:\Users\hp\Desktop\abhishekingit\Dev\Algos\Information security assignments\def.txt
# Original Hash  8ddf5bb6875c9ced48460afa70c10a883aa094d0
# New Hash  43d53317c1f1096887da65ac54bf5f15e40b6f7c
# File is tampered