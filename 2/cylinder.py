import matplotlib as mpl
from mpl_toolkits.mplot3d import Axes3D
import numpy as np
import matplotlib.pyplot as plt

mpl.rcParams['legend.fontsize'] = 10

fig = plt.figure()
ax = fig.gca(projection='3d')
x_v = list()
y_v = list()
z_v = list()

t = -np.pi
while t <= np.pi + 0.1:
    x_v.append(3*np.cos(t))
    y_v.append(3*np.sin(t))
    z_v.append(2)
    t += 0.1
ax.plot(x_v, y_v, z_v, label='circle1', color='black') #build first circle

x_v = []
y_v = []
z_v = [] #clear all lists

t = -np.pi
while t <= np.pi:
    x_v.append(3*np.cos(t))
    y_v.append(3*np.sin(t))
    z_v.append(5)
    
    line_x = list()
    line_y = list()
    line_z = list()
    
    ax.plot([x_v[len(x_v) - 1], x_v[len(x_v) - 1]], [y_v[len(y_v) - 1], y_v[len(y_v) - 1]], [2,5], color='black')
    t += 0.02
ax.plot(x_v, y_v, z_v, label='circle2', color='black') #build second circle


#ax.legend()
plt.xlabel('x axis')
plt.ylabel('y axis')
plt.show()