{Criar um algoritmo que leia 10 n�meros pelo teclado
e exiba os n�meros na ordem inversa da que os n�meros foram digitados.}

algoritmo "Vetores Inversos"

var m1:vetor[1..10] de inteiro
    contador:inteiro
    
inicio
      para contador <- 1 ate 10 faca
        escreva("Informe um n�mero: ")
        leia(m1[contador])
      fimpara
      escreval("* A sequ�ncia de n�meros inversos *")
      para contador <- 10 ate 1 passo -1 faca
        escreval("O numero �: ", m1[contador])
      fimpara
fimalgoritmo
