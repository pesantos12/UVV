from numpy import arange, sqrt, log10
import matplotlib.pyplot as plt

def f_n(n):
    return 12*sqrt(n)

def g_n(n):
    return 65*log10(n-8)

fn_value = []
gn_value = []

for i in arange(0, 200, 0.1):
    fn_value.append(f_n(i))

for i in arange(9, 200, 0.1):
    gn_value.append(g_n(i))

plt.figure()
plt.plot(arange(0, 200, 0.1), fn_value, 'r--', label=r'$f(n) = 12\sqrt{n}$')
plt.plot(arange(9, 200, 0.1), gn_value, 'b--', label=r'$g(n) = 65\log(n-8)$')


plt.yscale('log')
plt.legend(loc='lower right')
plt.savefig('exemplo_sala_01.png')