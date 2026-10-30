s = input("Enter brackets: ")

stack = []
valid = True

for ch in s:

    if ch == '(' or ch == '{' or ch == '[':
        stack.append(ch)

    else:
        if len(stack) == 0:
            valid = False
            break

        top = stack.pop()

        if ch == ')' and top != '(':
            valid = False
            break

        elif ch == '}' and top != '{':
            valid = False
            break

        elif ch == ']' and top != '[':
            valid = False
            break

if len(stack) != 0:
    valid = False

if valid:
    print("Valid Parentheses")
else:
    print("Invalid Parentheses")
