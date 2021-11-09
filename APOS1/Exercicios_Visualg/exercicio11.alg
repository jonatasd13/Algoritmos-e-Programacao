//Faça um algoritmo que solicite N números inteiros até que o número 0(zero) seja digitado.
//Ao final o algoritmo deve informar o maior e o menor número digitado.
//OBS: O número 0(zero) não pode ser contado.
//Fazer utilizando o comando ENQUANTO.

algoritmo "maior_menor enquanto"

var n, maior, menor:inteiro

inicio
      escreval("Digite um número: ")
      leia(n)
      enquanto n <> 0 faca
        escreval("Digite um número: ")
        leia(n)
       se n > maior entao
         maior <- n
       fimse
       se ((n < menor) e (menor <> 0)) entao
         menor <- n
       fimse
      fimenquanto
      escreval("O maior valor é: ", maior)
      escreval("O menor valor é: ", menor)

fimalgoritmo
