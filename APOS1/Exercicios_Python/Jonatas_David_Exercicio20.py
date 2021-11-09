#variaveis
contador = 0
vetor = [0]*10

#algoritmo
for contador in range(0, 10, 1):
    vetor[contador] = int(input("Informe o número para a posição " + str(contador) + ": "))

for contador in range(0, 10, 1):
    print(vetor[contador], end='')