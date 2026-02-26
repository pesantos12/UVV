from numpy import arange, sqrt, log2
import matplotlib.pyplot as plt

def exp_n(n):
    return pow(10, n)

def cub_n(n):
    return pow(n, 3)

def quad_n(n):
    return pow(n, 2)

def log_linear_n(n):
    return n*log2(n)

def linear_n(n):
    return n

def logaritma_n(n):
    return log2(n)

exp_values = []
cub_values = []
quad_values = []
log_linear_values = []
linear_values = []
logaritmo_values = []

for i in arange(0, 10, 0.1):
    exp_values.append(exp_n(i))

for i in arange(0, 10, 0.1):
    cub_values.append(cub_n(i))

for i in arange(0, 10, 0.1):
    quad_values.append(quad_n(i))

for i in arange(1, 10, 0.1):
    log_linear_values.append(log_linear_n(i))

for i in arange(0, 10, 0.1):
    linear_values.append(linear_n(i))

for i in arange(1, 10, 0.1):
    logaritmo_values.append(logaritma_n(i))

plt.figure()
plt.plot(arange(0, 10, 0.1), exp_values, '-', label=r'$f(n) = 10^n$')
plt.plot(arange(0, 10, 0.1), cub_values, '-', label=r'$f(n) = n^3$')
plt.plot(arange(0, 10, 0.1), quad_values, '-', label=r'$f(n) = n^2$')
plt.plot(arange(1, 10, 0.1), log_linear_values, '-', label=r'$f(n) = n log n$')
plt.plot(arange(0, 10, 0.1), linear_values, '-', label=r'$f(n) = n$')
plt.plot(arange(1, 10, 0.1), logaritmo_values, '-', label=r'$g(n) = log n$')

plt.ylim(0, 50)
plt.xlim(0, 10)


plt.legend(loc="upper right")
plt.savefig("exemplo_adicional.png")
