n = int(input("Enter number of students: "))

attendance = []

for i in range(n):
    x = float(input("Enter attendance: "))
    attendance.append(x)

threshold = float(input("Enter threshold: "))

count = 0

for x in attendance:
    if x < threshold:
        count = count + 1

lowest = attendance[0]
position = 0

for i in range(n):
    if attendance[i] < lowest:
        lowest = attendance[i]
        position = i

average = sum(attendance) / n

print("Students below threshold:", count)
print("Lowest attendance:", lowest)
print("Position:", position + 1)
print("Average attendance:", average)
