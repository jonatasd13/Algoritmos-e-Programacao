//Fa�a um algoritmo que solicite N n�meros inteiros at� que o n�mero 0(zero) seja digitado.
//Ao final o algoritmo deve informar o maior e o menor n�mero digitado.
//OBS: O n�mero 0(zero) n�o pode ser contado.
//Fazer utilizando o comando ENQUANTO.

algoritmo "maior_menor enquanto"

var n, maior, menor:inteiro

inicio
      escreval("Digite um n�mero: ")
      leia(n)
      enquanto n <> 0 faca
        escreval("Digite um n�mero: ")
        leia(n)
       se n > maior entao
         maior <- n
       fimse
       se ((n < menor) e (menor <> 0)) entao
         menor <- n
       fimse
      fimenquanto
      escreval("O maior valor �: ", maior)
      escreval("O menor valor �: ", menor)

fimalgoritmo
