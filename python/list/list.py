import sys

scores = [2, 5, 3, 8, 1, 4, 6, 7]

x = int(input("Number to search for: "))

# if in statement can be used to search
if x in scores:
    print("Found.")
    sys.exit(0)
else:
    print("Not found.")
    sys.exit(1)