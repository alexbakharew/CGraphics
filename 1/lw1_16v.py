import sys
import string
import matplotlib
import matplotlib.pyplot as plt
import numpy as np 

#def x_func(a, x):
#    return a * (np.cos(x) ** 3)

def func(a, x):
    return x * np.sqrt((a - x) / (a + x))

x_value = list()
y_value = list()

a = int()
a = input("input a value ")
i = - np.abs(int(a))
while i <= np.abs(int(a)):
    x_value.append(i)
    y_value.append(func(int(a), i))
    i += 0.001
    
plt.plot(x_value, y_value)
plt.xlabel('x axis')
plt.ylabel('y axis')
plt.show()