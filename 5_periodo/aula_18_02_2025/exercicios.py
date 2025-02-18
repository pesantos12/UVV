# 1.

# a) (10 + 20) * 30
#>>> 900

# b) (4**2) / 30
#>>> 0.5333333333333333

# c) (((9**4) + 2) * 6 ) − 1
#>>> 39377

# 2.

# (10%3*(10**2))+ 1 - (10 * (4/2))
#>>> 81.0

# 3.

def quest3(a, b, c):
    return (a + b + c)

a = 2
b = 3
c = 4
resultado = quest3(a, b, c)
print(resultado)

# 4.

salario = 750.00
aumento = 0.15
salariofinal = salario + (salario * aumento)
print(salariofinal)
#>>> 862.5

# 5.

def converterEmSegundos(dias, horas, minutos, segundos):
    minutos *= 60
    horas *= 60*60
    dias *= 24*60*60
    return (dias + horas + minutos + segundos)

Ndias = 2
Nhoras = 12
Nminutos = 20
Nsegundos = 15
print(converterEmSegundos(Ndias, Nhoras, Nminutos, Nsegundos))
#>>> 217215

# 6.

def maior():
    a = input("\nDigite o 1° valor: ")
    b = input("\nDigite o 2° valor: ")
    c = input("\nDigite o 3° valor: ")

    if a > b:
        if a > c:
            print(a)
        else:
            print(c)
    elif b > c:
        print(b)
    else:
        print(c)

maior()

# 7.

from math import sqrt, floor
def ePrimo(x):
    if x <= 1:
        print(f"O número {x} não é primo.")
        return
    else:
        for n in range(2, x):
            if x%n == 0:
                print(f"O número {x} não é primo!")
                return
            if (n**2) >= x:
                print(f"O número {x} é primo!")
                return
        print(f"O número {x} é primo!")

ePrimo(3)
ePrimo(4)
ePrimo(5)
ePrimo(6)
        