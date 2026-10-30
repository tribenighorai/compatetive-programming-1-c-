activities = [
    (1, 3),
    (2, 5),
    (4, 6),
    (6, 8),
    (5, 7)
]

activities.sort(key=lambda x: x[1])

selected = []
last_finish = 0

for start, finish in activities:

    if start >= last_finish:
        selected.append((start, finish))
        last_finish = finish

print("Selected activities:")

for activity in selected:
    print(activity)

print("Maximum activities:", len(selected))
