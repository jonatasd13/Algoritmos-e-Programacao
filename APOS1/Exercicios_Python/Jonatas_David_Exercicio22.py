#variaveis
n1 = 0
n2 = 0
n3 = 0
valormedia = ""

#funcao
def media_arit(nota1, nota2, nota3):
    media_a = (nota1 + nota2 + nota3)/3
    return media_a

def media_pond(nota1, nota2, nota3):
    media_p = ((nota1 * 5) + (nota2 * 3) + (nota3 * 2))/10
    return media_p

#algoritmo
n1 = float(input("Informe a primeira nota: "))
n2 = float(input("Informe a segunda nota: "))
n3 = float(input("Informe a terceira nota: "))

valormedia = input("Aperte A para calcular a média aritmética, caso queira calcular a média ponderada aperte P: ")

if valormedia == "A":
    print("A média aritmética é: ", str(media_arit(n1, n2, n3)))
elif valormedia == "P":
    print("A média ponderada é: ", str(media_pond(n1, n2, n3)))