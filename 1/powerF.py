import sys
import string
import matplotlib
import matplotlib.pyplot as plt
import numpy as np 

def func(x):
    return x ** 2

x_value = list()
y_value = list()

i = -5
while i <= 5:
    x_value.append(i)
    y_value.append(func(i))
    i += 0.01

plt.plot(x_value, y_value)
plt.ylabel('y axis')
plt.xlabel('x axis')
plt.show()