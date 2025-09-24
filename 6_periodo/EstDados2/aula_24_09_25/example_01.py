import queue 

fifo = queue.Queue() # primeiro que entra é o primeiro que sai
fifo.put("A")
fifo.put("B")
fifo.put("C")

"""
print(fifo.qsize())
print(fifo.get())
print(fifo.qsize())
"""

lifo = queue.LifoQueue() # primeiro que entra é o último que sai
lifo.put("A")
lifo.put("B")
lifo.put("C")

"""
print(lifo.qsize())
print(lifo.get())
print(lifo.qsize())
"""

# Fila de prioridade
prioridade = queue.PriorityQueue()
prioridade.put(20, "A")
prioridade.put(13, "B")
prioridade.put(35, "C")

print(prioridade.qsize())
print(prioridade.get())
print(prioridade.qsize())

