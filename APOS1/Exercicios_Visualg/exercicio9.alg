//Fa�a um algoritmo que solicite N n�meros inteiros.
//Ao final o algoritmo deve informar o maior n�mero digitado.

algoritmo "maior numero"

var i, maior, contador, d:inteiro

inicio
      escreva("Digite quantos n�meros voc� quer distribuir: ")
      leia(i)
      para contador <- 1 ate i faca
        escreva("Digite um n�mero: ")
        leia(d)
       se d > maior entao
         maior <- d
       fimse
      fimpara
      escreva("O maior valor �: ", maior)

fimalgoritmo
