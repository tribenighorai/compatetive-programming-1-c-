code = input("Enter book code: ")

valid = True

if len(code) != 12:
    valid = False

elif code[3] != '-' or code[8] != '-':
    valid = False

elif not code[0:3].isalpha():
    valid = False

elif not code[4:8].isdigit():
    valid = False

elif not code[9:12].isdigit():
    valid = False

if valid:
    print("Valid book code")
else:
    print("Invalid book code")
