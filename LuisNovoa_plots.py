import numpy as np
import matplotlib.pyplot as plt

tlf = np.genfromtxt("datos", usecols=0, skip_header=0)
ylf = np.genfromtxt("datos", usecols=0, skip_header=0)

plt.figure()
plt.plot(tlf,ylf)
plt.xlabel("t")
plt.ylabel("y")
plt.title("Adveccion")
plt.savefig("Adveccion.pdf")

