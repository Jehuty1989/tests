# Create an empty list (similar to arrays in c) called scores.
# Like arrays you access individual elements using [x].
scores = []

# Take a variable int x for how many scores to input.
# The input command will always take a string by default
# so it must be cast to an int.
x = int(input("How many scores? "))

# Using "for y in range(x)" creates a new int called y starting at 0
# by default and runs the loop until the value of x is reached.
# E.g. If x = 4. y = 0 then 1 then 2 then 3 then the loop stops
# as they now both equal 4. The loop will run 4 times, 0, 1, 2, 3.
for y in range(x):
    
    # "scores.append" is a command to add to the list.
    # "int(input(f"Score 0{y + 1}: "))" will take an integer
    # as input and append the scores list one by one until
    # the for loop comes to an end.
    scores.append(int(input(f"Score 0{y + 1}: ")))

# New variables do not need to be cast in python as python
# can infer based on what comes after the "=".
# If an integer is passed through python will create an int.
# If a string (1 char or more) is passed it will create a string.
# If you want a string of numbers you must bookend them with quotes
average = sum(scores) / len(scores)

# "print" works as usual.
# New difference is the "f" after the "(". This tells python to format
# anything in curly brackets "{}".
print(f"Average: {round(average)}")