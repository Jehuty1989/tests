x = int(input("Starting number: "))
y = int(input("Ending number: "))
z = int(input("Increments of: "))

# It looks as though the for range loop checks the condition
# ahead to see if the loop must run.
# E.g. x = -10, y = 10, z = 5
# a = -10 then -5 then 0 then 5 then the loop stops
# The next step would have a = 10 but the loop will not allow it
# as the condition has now been met so it stops after checking.
# If I want a = 10 then y must equal at least 11.

# I suspect this is because ints start as 0 by default
# so if range equals 2 the for range loop will run twice.
for a in range(x, y, z):
    print(f"{a}")