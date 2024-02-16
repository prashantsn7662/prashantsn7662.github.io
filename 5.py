import numpy as np
import matplotlib.pyplot as plt
discount=np.array([10,20,30,40,50])
sale=np.array([40000,45000,48000,50000,100000])
plt.scatter(x=discount,y=sale)
plt.title('Sales vs Discount')
plt.xlabel('Discount offer')
plt.ylabel('Sales in Rupees')
plt.show()

import numpy as np
import matplotlib.pyplot as plt
discount=np.array([10,20,30,40,50])
sale=np.array([40000,45000,48000,50000,100000])
size=discount*10
plt.scatter(x=discount,y=sale,s=size,color='Red',linewidth=1.87,marker='*'
,edgecolor='blue')
plt.title('Sales vs Discount')
plt.xlabel('Discount offer')
plt.ylabel('Sales in Rupees')
plt.show()