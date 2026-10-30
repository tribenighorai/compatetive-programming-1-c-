arr = [90, 80, 70, 60, 50, 40]

target = int(input("Enter number to search: "))

low = 0
high = len(arr) - 1
found = -1

while low <= high:
    mid = (low + high) // 2

    if arr[mid] == target:
        found = mid
        break

    elif arr[mid] < target:
        high = mid - 1

    else:
        low = mid + 1

print("Index:", found)
