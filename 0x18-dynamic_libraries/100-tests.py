import random
import ctypes

# Load the shared library
cops = ctypes.CDLL('./100-operations.so')

# Generate random integers
a = random.randint(-111, 111)
b = random.randint(-111, 111)

# Ensure the functions are correctly typed
cops.add.restype = ctypes.c_int
cops.sub.restype = ctypes.c_int
cops.mul.restype = ctypes.c_int
cops.div.restype = ctypes.c_int
cops.mod.restype = ctypes.c_int

print("{} + {} = {}".format(a, b, cops.add(a, b)))
print("{} - {} = {}".format(a, b, cops.sub(a, b)))
print("{} x {} = {}".format(a, b, cops.mul(a, b)))

# Check for division by zero
if b != 0:
    print("{} / {} = {}".format(a, b, cops.div(a, b)))
    print("{} % {} = {}".format(a, b, cops.mod(a, b)))
else:
    print("Division and modulo by zero are not defined.")

