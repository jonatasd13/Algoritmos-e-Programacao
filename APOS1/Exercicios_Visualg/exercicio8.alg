//Implementar o exemplo demonstrado no V�deo 4 onde � montado um algoritmo para
//realizar o c�lculo da tabuada de um n�mero que foi solicitado ao usu�rio.

algoritmo "tabuada"

var
   multiplicando, multiplicador, contador:inteiro
   
inicio
      escreva("Digite o n�mero a ser multiplicado: ")
      leia(multiplicador)
      escreva("Digite o n�mero at� a tabuada ir�: ")
      leia(contador)
      para multiplicando <- 1 ate contador faca
        escreva(multiplicador, " X ", multiplicando, " = ", multiplicando * multiplicador)
      fimpara

fimalgoritmo
