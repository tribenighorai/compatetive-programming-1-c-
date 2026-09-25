n = int(input("Enter number of products: "))

prices = []

for i in range(n):
    price = int(input("Enter price: "))
    prices.append(price)


# Bubble Sort
bubble = prices.copy()

for i in range(n - 1):
    for j in range(n - 1 - i):
        if bubble[j] > bubble[j + 1]:
            bubble[j], bubble[j + 1] = bubble[j + 1], bubble[j]

print("\nBubble Sort:")
print(bubble)


# Selection Sort
selection = prices.copy()

for i in range(n - 1):
    min_index = i

    for j in range(i + 1, n):
        if selection[j] < selection[min_index]:
            min_index = j

    selection[i], selection[min_index] = selection[min_index], selection[i]

print("Selection Sort:")
print(selection)


# Insertion Sort
insertion = prices.copy()

for i in range(1, n):
    key = insertion[i]
    j = i - 1

    while j >= 0 and insertion[j] > key:
        insertion[j + 1] = insertion[j]
        j = j - 1

    insertion[j + 1] = key

print("Insertion Sort:")
print(insertion)
