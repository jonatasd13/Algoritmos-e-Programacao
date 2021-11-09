#variaveis
nome = ""
mensagem = ""
vm = 0.0

#algoritmo
nome = input("Digite o nome: ")
vm = float(input("Digite o quanto foi vendido esse mês: "))

if(vm >= 10000) and (vm <= 50000):
    mensagem = "a venda está ideal"
else:
    if(vm < 10000):
         mensagem = "a venda está baixa"
    else:
         mensagem = "a venda está ótima"

print(nome, ", ", mensagem)