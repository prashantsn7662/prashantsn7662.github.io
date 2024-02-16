import pandas as pd
import matplotlib.pyplot as plt
df=pd.read_csv('Melasales.csv')
df.plot(kind='line',color=['red','blue','brown'])
plt.title('Mela Sales Report')
plt.xlabel('Days')
plt.ylabel('Sales in Rs.')
plt.show()


import pandas as pd
import matplotlib.pyplot as plt
df=pd.read_csv('Melasales.csv')
df.plot(kind='bar',x='Days',color=['red','blue','brown'])
plt.title('Mela Sales Report')
plt.xlabel('Days')
plt.ylabel('Sales in Rs.')
plt.show(