# Problema de fatoraccao com threads

import queue
import threading
import time

class MyThread(threading.Thread):
    def __init__(self,name):
        threading.Thread.__init__(self)
        self.name = name
    
    def run(self):
        print("Iniciando thread %s." % self.name)
        processando_fila(self.name)
        print("Encerrando thread %s." % self.name)

def processando_fila(name):
    while True:
        try:
            x = my_queue.get(block=False)
        except queue.Empty:
            return
        else:
            fatoracao(x, name)
        time.sleep(1)

def fatoracao(x, name):
    resultado = ('Thread %s -> ' % name) +('fatores positivos de %i sao: ' % x)
    for i in range(1, (x//2) + 1):
        if x % i == 0:
            resultado += str(i) + ', '
    resultado += str(x)
    resultado += '\n' + '_' * 30
    print(resultado)

# Carregando o manipulador de filas

my_queue = queue.Queue()

# Determinando valores a serem fatorados

input_ = [1, 10, 4, 3, 20, 36, 48]

# Inserindo os valores numa fila

for x in input_:
    my_queue.put(x)

# print(my_queue.qsize())

#for j in input_:
#   fatoracao(j)

# Inicializando 3 threads

thread1 = MyThread('A')
thread2 = MyThread('B')
thread3 = MyThread('C')
thread4 = MyThread('D')
thread5 = MyThread('E')
thread6 = MyThread('F')

thread1.start()
thread2.start()
thread3.start()
thread4.start()
thread5.start()
thread6.start()

# Finalizando os 3 threads

thread1.join()
thread2.join()
thread3.join()
thread4.join()
thread5.join()
thread6.join()

print('\n', 'Concluido')