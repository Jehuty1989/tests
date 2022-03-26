# Command-line arguments aren't default with python
# Simply import "sys" or import "argv" from "sys"
from sys import argv

# "len(argv)" is analogous to argc.
# argc being how many strings were passed through the terminal.
# argv is essentially a list of strings.
if len(argv) == 2:
    print(f"hello {argv[1].lower()}")
else:
    print("hello, world")

# "for in" loops can also iterate over lists
for arg in argv:
    print(arg)