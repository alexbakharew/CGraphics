import sys
import string
import matplotlib
import matplotlib.pyplot as plt
import numpy as np 

x_value = list()
y_value = list()
z_value = list()

for i in range(10):
    x_value.append(i)
    y_value.append(i)
    z_value.append(i)

plt.plot(x_value, y_value, z_value)
plt.show()
    