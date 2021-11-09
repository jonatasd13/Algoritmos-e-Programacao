#variaveis
nome = ""
salario = 0.0
cheque1 = 0.0
cheque2 = 0.0
imposto = 0.0
saldo = 0.0

#algoritmo
nome = input("Informe o nome do trabalhador: ")
salario = float(input("Informe o salário: "))
cheque1 = float(input("Informe o valor do primeiro cheque: "))
cheque2 = float(input("Informe o valor do segundo cheque: "))

imposto = (cheque1 * (0.38/100)) + (cheque2 * (0.38/100))
saldo = salario - (imposto + cheque1 + cheque2)

print(nome, ", ainda tem R$", str(saldo))