import plotly.offline as py
import plotly.graph_objs as go
import plotly.tools as tls
import numpy as np

t = np.linspace(-np.pi, np.pi, 100)
Z1 = []
Z2 = []

for i in t:
    Z1.append(np.cos(t), np.sin(t))

Z1 = np.sqrt(3600 - np.power(X,2) - np.power(Y,2))
#Z2 = np.power(X,2) + np.power(Y,2)

trace1 = go.Surface(z=Z1, colorscale='Viridis')
#trace2 = go.Surface(z=Z2, colorscale='Viridis')

py.plot([trace1])
