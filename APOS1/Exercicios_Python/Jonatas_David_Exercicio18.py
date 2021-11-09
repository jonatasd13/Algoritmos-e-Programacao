#variaveis
num = 0.0
n = 0.0
cont = 0.0
maior = 0.0

#algoritmo
n = int(input("Digite quantos números você quer distribuir: "))

for cont in range(0, n):
    num = int(input("Digite um numero: "))
    if (num > maior):
        maior = num

print("O maior número é: ", maior)