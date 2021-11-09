//Criar um algoritmo que leia os elementos de uma
//matriz inteira 5 x 5 e escreva os elementos da diagonal principal.

algoritmo "Matrizes Diagonais"

var m1:vetor[1..5,1..5] de inteiro
    linha, coluna:inteiro

inicio
      para linha <- 1 ate 5 faca
       para coluna <- 1 ate 5 faca
        escreva("Informe um número na linha ", linha,", coluna ", coluna,": ")
        leia(m1[linha,coluna])
       fimpara
      fimpara
      escreva(m1[1,1])
      escreva(m1[2,2])
      escreva(m1[3,3])
      escreva(m1[4,4])
      escreva(m1[5,5])
fimalgoritmo
