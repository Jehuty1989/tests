# A "set()" is like a "list[]" but with a few differences

# You cannot have duplicate values, e.g. A list can
# contain any number of elements with the same value
# but a set can only contain a maximum of 1 of any
# value

# There is no particularly obvious order to the values
# A list stores them back to back but a set stores them
# like linked lists

# I do not think you can index into a set like a list
# A set uses a hash function to store and search
words = set()

def check(word):
    # This is used to check to see if a particular word
    # is in the words set
    # Lowercase is forced to match the words set
    if word.lower() in words:
        return True
    else:
        return False

def load(dictionary):
    # Create a file variable which will be the file
    # that the dictionary variable will point to.
    # "r" for read mode
    file = open(dictionary, "r")
    # for in loop will create a string variable called "line"
    # and it will read the file 1 line at a time automatically
    # because the file variable "file".
    # python infers line reading based on the file variable.
    for line in file:
        # "words.add" is a built in function for sets in python
        # "line.rstrip()" will add "line" to the set "words"
        # and remove the white space using "rstrip"
        words.add(line.rstrip())
        # "file.close" will simply close the file
        file.close()
        return True

def size():
    # Very simply return the length of the set "words"
    return len(words)

def unload():
    # No need to free any memory in python
    return True