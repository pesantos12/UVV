import pandas as pd

# Classe para um nó da árvore binária

class Node:
    def __init__(self, data):
        self.data = data # aqui vai uma linha do dataset (um dicionário)

        self.left = None
        self.right = None

# Classe da árvore binária

class BinaryTree:
    def __init__(self):
        self.root = None

    # Inserir um novo dado na árvore comparando pelo comprimento da sépala (sepal_length)

    def insert(self, data):
        if self.root is None:
            self.root = Node(data)
        else:
            self._insert_recursive(self.root, data)

    def _insert_recursive(self, current_node, data):
        # Usar 'sepal_length' para decidir
        if data['sepal_length'] < current_node.data['sepal_length']:
            if current_node.left is None:
                current_node.left = Node(data)
            else:
                self._insert_recursive(current_node.left, data)
        else:
            if current_node.right is None:
                current_node.right = Node(data)
            else:
                self._insert_recursive(current_node.right, data)

    # Função para imprimir a árvore (pré-ordem)

    def print_tree(self, node):
        if node is not None:
            print(node.data)
            self.print_tree(node.left)
            self.print_tree(node.right)

# Carregar o CSV

df = pd.read_csv('iris.csv')


# Transformar cada linha em dicionário

data_list = df.to_dict(orient='records')

# Criar a árvore e inserir os dados 

tree = BinaryTree()

for item in data_list:
    tree.insert(item)

# Imprimir árvore

tree.print_tree(tree.root)