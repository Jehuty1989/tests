# A dictionary in python is similar to a hash table in c
# It starts with a key followed by a value
# "birthdays" is the name of the dictionary
# "Alastair" and "Tatiana" are keys for the values that follow
# I am pretty sure that it uses a hash calculator to find the value
birthdays = {
    "Alastair": "21/10/89",
    "Tatiana": "08/03/95"
}

name = input("Name: ")

# if string name is in dictionary birthdays
# python will take the string and hash a key and see if the key exists in the dictionary
if name in birthdays:
    # Access the birthdays dictionary using name as key
    # Access is similar to lists except you can use a string to index instead of an int
    # although the string is probably being converted to a unique int regardless
    print(f"Birthday: {birthdays[name]}")