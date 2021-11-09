#variaveis
contador = 1
n = 0
maior = n
menor = n

#algoritmo
while contador != 0:
    n = int(input('Insira os números: '))
    if n > maior:
        maior = n
    elif n != 0:
        menor = n
    contador = n

print("O maior número é: ", str(maior), " e o menor é: ", str(menor))