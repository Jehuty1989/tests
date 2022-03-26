import sys

# sys.argv is used as I imported the whole sys library and not just argv.
# Think structs in c
# This is used in case you import more than 1 library with same name for a function.
if len(sys.argv) != 2:
    print("Missing command-line argument.")
    
    # sys.exit() is the same as return in main from c
    # This can be used to quit a programme when you want and return an int
    sys.exit(1)
    
print(f"hello {sys.argv[1]}")
sys.exit(0)