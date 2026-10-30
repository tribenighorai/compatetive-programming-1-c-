arr = [2, 7, 11, 15]

target = int(input("Enter target: "))

seen = {}

for i in range(len(arr)):
    x = arr[i]
    need = target - x

    if need in seen:
        print("Indices:", seen[need], i)
        break

    seen[x] = i
else:
    print("No solution found")
