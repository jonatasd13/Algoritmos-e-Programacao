{Criar um algoritmo que leia 10 números pelo teclado
e exiba os números na ordem inversa da que os números foram digitados.}

algoritmo "Vetores Inversos"

var m1:vetor[1..10] de inteiro
    contador:inteiro
    
inicio
      para contador <- 1 ate 10 faca
        escreva("Informe um número: ")
        leia(m1[contador])
      fimpara
      escreval("* A sequência de números inversos *")
      para contador <- 10 ate 1 passo -1 faca
        escreval("O numero é: ", m1[contador])
      fimpara
fimalgoritmo
