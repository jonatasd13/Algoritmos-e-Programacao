//Faça um algoritmo que solicite N números inteiros.
//Ao final o algoritmo deve informar o maior número digitado.

algoritmo "maior numero"

var i, maior, contador, d:inteiro

inicio
      escreva("Digite quantos números você quer distribuir: ")
      leia(i)
      para contador <- 1 ate i faca
        escreva("Digite um número: ")
        leia(d)
       se d > maior entao
         maior <- d
       fimse
      fimpara
      escreva("O maior valor é: ", maior)

fimalgoritmo
