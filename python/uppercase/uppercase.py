s = input("Before: ")

# "print" will end with a new line (\n) by default so if you want the line
# to carry on you must add "end=" argument. This is essentially a suffix.
# A blank argument simply not add a new line.
print("After:  ", end="")

# for in loops can be used to iterate over strings.
# python knows to create a string variable called c as the argument given
# is a string.
for c in s:
    print(f"{c.upper()}", end="")

# This prints a new line at the end.
print()