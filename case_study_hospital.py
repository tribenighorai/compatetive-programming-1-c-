n = int(input("Enter number of hours: "))

patients = []

for i in range(n):
    x = int(input("Enter number of patients: "))
    patients.append(x)

maximum = patients[0]
minimum = patients[0]
max_hour = 1

for i in range(n):
    if patients[i] > maximum:
        maximum = patients[i]
        max_hour = i + 1

    if patients[i] < minimum:
        minimum = patients[i]

average = sum(patients) / n

count = 0

for x in patients:
    if x > average:
        count = count + 1

print("Maximum patients:", maximum)
print("Hour:", max_hour)
print("Minimum patients:", minimum)
print("Peak hour:", max_hour)
print("Average patients:", average)
print("Hours above average:", count)
