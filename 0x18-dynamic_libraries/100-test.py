import random
import ctypes

cops = ctypes.CDLL('./100-operations.so')
x = random.randint(-111, 111)
y = random.randint(-111, 111)
print("{} + {} = {}".format(x, y, cops.add(x, y)))
print("{} - {} = {}".format(x, y, cops.sub(x, y)))
print("{} x {} = {}".format(x, y, cops.mul(x, y)))
print("{} / {} = {}".format(x, y, cops.div(x, y)))
print("{} % {} = {}".format(x, y, cops.mod(x, y)))
