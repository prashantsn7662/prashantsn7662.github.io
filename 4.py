import pandas as pd
import matplotlib.pyplot as plt
data=pd.read_csv('L:\Python\DataVisualization\Resort.csv')
df=pd.DataFrame(data)
df.plot(kind='box',x='Year',title="Compare Resorts")
plt.xlabel('Resorts')
plt.ylabel('Rating')
plt.show()



import pandas as pd
import matplotlib.pyplot as plt
data=pd.read_csv('L:\Python\DataVisualization\Resort.csv')
df=pd.DataFrame(data)
df.plot(kind='box',x='Year',title="Compare
Resorts",vert=False,patch_artist=True)
plt.xlabel('Resorts')
plt.ylabel('Rating')
plt.show(