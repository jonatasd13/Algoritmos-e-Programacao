//Implementar o exemplo demonstrado no Vídeo 4 onde é montado um algoritmo para
//realizar o cálculo da tabuada de um número que foi solicitado ao usuário.

algoritmo "tabuada"

var
   multiplicando, multiplicador, contador:inteiro
   
inicio
      escreva("Digite o número a ser multiplicado: ")
      leia(multiplicador)
      escreva("Digite o número até a tabuada irá: ")
      leia(contador)
      para multiplicando <- 1 ate contador faca
        escreva(multiplicador, " X ", multiplicando, " = ", multiplicando * multiplicador)
      fimpara

fimalgoritmo
