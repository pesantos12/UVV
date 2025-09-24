from queue import Queue

class No:
    def __init__(self, valor):
        self.valor = valor
        self.esquerda = None
        self.direita = None

raiz = No('A')
raiz.esquerda = No('B')
raiz.direita = No('C')
raiz.esquerda.esquerda = No('D')
raiz.esquerda.direita = No('E')
raiz.direita.direita = No('F')

def bfs(raiz):
    fila = Queue()
    fila.put(raiz)
    while not fila.empty():
        no = fila.get()
        print(no.valor, end=' ')
        if no.esquerda:
            fila.put(no.esquerda)
        if no.direita:
            fila.put(no.direita)

bfs(raiz)