from numpy import arange, sqrt, log10
import matplotlib.pyplot as plt
from math import factorial

def f_n(n):
    return 2**n

def g_n(n):
    return n**3

def h_n(n):
    return factorial(n)

fn_value = []
gn_value = []
hn_value = []

for i in arange(0, 20, 1):
    fn_value.append(f_n(i))

for i in arange(0, 20, 1):
    gn_value.append(g_n(i))

for i in arange(0, 20, 1):
    hn_value.append(h_n(i))

plt.figure()
plt.plot(arange(0, 20, 1), fn_value, 'r--', label=r'$f(n) = 2^n$')
plt.plot(arange(0, 20, 1), gn_value, 'b--', label=r'$g(n) = n^3$')
plt.plot(arange(0, 20, 1), hn_value, 'k--', label=r'$h(n) = n!$')


plt.yscale('log')
plt.legend(loc='lower right')
plt.savefig('exemplo_sala_03.png')