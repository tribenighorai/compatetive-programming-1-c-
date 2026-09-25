n = int(input("Enter number of students: "))

names = []

for i in range(n):
    name = input("Enter student name: ")
    names.append(name)

search = input("Enter name to search: ")

print("\nCase-sensitive search:")

found = False

for i in range(n):
    if names[i] == search:
        print("Student found at position:", i + 1)
        found = True

if found == False:
    print("Student not found")


print("\nCase-insensitive search:")

found = False

for i in range(n):
    if names[i].lower() == search.lower():
        print("Student found at position:", i + 1)
        found = True

if found == False:
    print("Student not found")
