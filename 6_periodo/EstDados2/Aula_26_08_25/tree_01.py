class Node:
    def __init__(self, data):
        self.data = data
        self.left_child = None
        self.right_child = None

nA = Node('A')
nB = Node('B')
nC = Node('C')
nD = Node('D')
nE = Node('E')
nF = Node('F')
nG = Node('G')
nH = Node('H')

nA.left_child = nB
nA.right_child = nC
nB.left_child = nD
nB.right_child = nE
nC.right_child = nF
nD.left_child = nG
nD.right_child = nH

"""current = n1

while current:
print(current.data)
current = current.right_child"""

def inorder(root_node, i = 0):
    current = root_node
    if current is None:
        return

    i += 1
    inorder(current.left_child, i)
    print(current.data)
    inorder(current.right_child, i)

def preorder(root_node, i = 0):
    current = root_node
    if current is None:
        return

    i+= 1
    print(current.data)
    preorder(current.left_child, i)
    preorder(current.right_child, i)

def posorder(root_node, i = 0):
    current = root_node

    if current is None:
        return

    i+=1
    posorder(current.left_child, i)
    posorder(current.right_child, i)
    print(current.data)

if __name__ == '__main__':
    print('Em ordem:')
    inorder(nA)
    print('------------------\nPre-ordem')
    preorder(nA)
    print('------------------\nPós-ordem')
    posorder(nA)