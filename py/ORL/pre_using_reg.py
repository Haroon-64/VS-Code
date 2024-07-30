from sklearn.linear_model import LinearRegression
from sklearn.neighbors import KNeighborsRegressor as KNR
import numpy as np
import matplotlib.pyplot as plt
import pandas as pd


#source
data = pd.read_csv("py/ORL/lifesat.csv")

#load axis
x= data[['GDP_per_capita']].values
y= data[['Life_satisfaction']].values

#visualize
data.plot(kind="scatter", x="GDP_per_capita", y="Life_satisfaction")

plt.axis([23_500, 62_500, 4, 9])
plt.show()

#select a linear model
model= LinearRegression()
model.fit(x,y)  #train model
#predict for some
xnew= [[22587]]
print(model.predict(xnew))


#using knearest
model2= KNR(n_neighbors=3)
model2.fit(x,y)
print(model2.predict(xnew))
