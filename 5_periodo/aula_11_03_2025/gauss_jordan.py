# gauss_jordan.py

def print_matrix(M, decimals = 3):
    for row in M:
        print([round(x, decimals)+0 for x in row])

def zeros_matrix(rows, cols):
    M = []
    while len(M) < rows:
        M.append([])
        while len(M[-1] < cols):
            M[-1].append(0.0)
    return M

matriz_zeros = zeros_matrix(3, 3)
print_matrix(matriz_zeros)

def GaussJordanMethod(augMat):
    n = len(augMat)
    m = len(augMat[0])

    for i in range(n):
        if augMat[i][i] == 0:
            for j in range(i+1, n):
                if augMat[j][i] != 0:
                    augMat[i], augMat[j] = augMat[j], augMat[i]
                    break
                else:
                        # Caso nao encontre linha com valor diferente de zero
                        # temos uma singularidade
                    raise ValueError("Matriz singular!")

        # Normalizando cada linha
        # L_i <-- L_i/a_ii

        if augMat[i][i] != 1:
            divisor = augMat[i][i]
            for k in range(m):
                augMat[i][k] /= divisor
        else:
            pass
        # Zerando as entradas do pivo
        # L_j <-- L_j - a_ji * L_i
        for j in range(n):
            if i != j:
                coef = augMat[j][i]
                for k in range(m):
                    augMat[j][k] -= coef * augMat[i][k]
            else:
                pass
    print_matrix(augMat)

matrix = [[3.0, 2.0, -4.0, 3.0], [2.0, 3.0, 3.0, 15.0], [5.0, -3.0, 1.0, 14.0]]
matrix2 = [[0.0, 2.0, 0.0, 1.0, 0.0], [2.0, 2.0, 3.0, 2.0, -2.0], [4.0, -3.0, 0.0, 1.0, -7.0], [6.0, 1.0, -6.0, -6.0, 6.0]]


GaussJordanMethod(matrix)