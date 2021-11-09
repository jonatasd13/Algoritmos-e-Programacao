#variaveis
linha = 0
coluna = 0
matriz = [[0]*5, [0]*5, [0]*5, [0]*5, [0]*5]
i = 0

#algoritmo
for linha in range(0, 5, 1):
    for coluna in range(0, 5, 1):
        matriz[linha][coluna] = int(input("Informe o número para a posição " + str(linha) + ", " + str(coluna) + ": "))

for linha in range(0, 5, 1):
    for coluna in range(0, 5, 1):
        print("[", matriz[linha] == matriz[coluna], "]", end='')