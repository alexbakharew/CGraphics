import sys
import string
import matplotlib
import matplotlib.pyplot as plt
import numpy as np 

def x_func(a, x):
    return a * (np.cos(x) ** 3)

def y_func(a, x):
    return a * (np.sin(x) ** 3)

x_value = list()
y_value = list()

i = 0
a = int()
a = input()0
while i <= 2 * np.pi:
    x_value.append(x_func(int(a), i))
    y_value.append(y_func(int(a), i))
    i += 0.01
    
plt.plot(x_value, y_value)
plt.xlabel('x axis')
plt.ylabel('y axis')
plt.show()