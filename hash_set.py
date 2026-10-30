arr = [10, 20, 10, 30, 20, 40]

seen = set()
result = []

for x in arr:
    if x not in seen:
        result.append(x)
        seen.add(x)

print("Original list:", arr)
print("After removing duplicates:", result)
