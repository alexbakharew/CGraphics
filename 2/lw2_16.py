import matplotlib as mpl
from mpl_toolkits.mplot3d import Axes3D
import numpy as np
import matplotlib.pyplot as plt

mpl.rcParams['legend.fontsize'] = 10

fig = plt.figure()
ax = fig.gca(projection='3d')

x = list()
y = list()
z = list()

h = input("Enter the height of pyramid ")
step = float(2*np.pi / 16)
t = 0
while t <= 2*np.pi + step:
    x.append(5*np.cos(t))
    y.append(5*np.sin(t))
    z.append(0)
    ax.plot([0, 5 * np.cos(t)], [0, 5 * np.sin(t)], [float(h), 0], color='black')
    t += step
ax.plot(x, y, z, color='black')
plt.show()