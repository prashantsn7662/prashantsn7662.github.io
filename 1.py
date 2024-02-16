import matplotlib.pyplot as plt
date=["12/2", "14/5", "25/7", "23/9"]
temp=[18.5, 27.5, 23, 35]
plt.plot(temp, date, color='green')
plt.xlabel('Temperature', color='purple')
plt.ylabel('Date', color='purple')
plt.title('Temperature vs Date', color='blue')
plt.grid(True)
plt.show()