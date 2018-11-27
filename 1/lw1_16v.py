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

print("Enter A, B and a values")
print("-a < A <= i <= B < a, a > 0")
A = float(input("Enter A "))
B = float(input("Enter B "))
a = int(input("Enter a "))
i = A
while i <= B:
    x_value.append(i)
    y_value.append(func(int(a), i))
    i += 0.001
    
plt.plot(x_value, y_value)
plt.xlabel('x axis')
plt.ylabel('y axis')
plt.show()