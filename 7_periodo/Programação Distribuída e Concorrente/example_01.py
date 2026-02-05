from math import sqrt
from timeit import default_timer as timer
import concurrent.futures

def eh_primo(x):
    if x < 2:
        return False 

    if x == 2:
        return x
    
    if x % 2 == 0:
        return False

    limit = int(sqrt(x)) + 1

    for i in range(3, limit, 2):
        if x % i == 0:
            return False
        
    return x

def main():
    numeros = [i for i in range(10**13, 10**13 + 500)]

    # Sequencial
    start = timer()
    result = [i for i in numeros if eh_primo(i)]
    print('Sequencial', result)
    print('EndTime: %.4f segundos.' %(timer()- start))

    # Concorrente
    start = timer()
    result = []
    with concurrent.futures.ProcessPoolExecutor() as executor:
        for r in executor.map(eh_primo, numeros):
            if r:
                result.append(r)
    print('Sequencial', result)
    print('EndTime: %.4f segundos.' %(timer()- start))

if __name__ == '__main__':
    main()