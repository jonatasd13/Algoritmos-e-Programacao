//Desenvolva um algoritmo que efetue o c�lculo da tabuada de um n�mero que
//dever� ser solicitado ao usu�rio do sistema. O c�lculo dever� ser realizado atrav�s
//de um procedimento que receber� o n�mero digitado e mostrar� o resultado na tela.
//Vamos tomar como exemplo que o usu�rio digitou o n�mero 2,
//a resposta na tela deve ser acordo com o exemplo abaixo:
//2 X 1 = 2, 2 X 2 = 4...2 X 10 = 20

algoritmo "procedimento_tabuada"

var

inicio
      procedimento tabuada()
        var
           multiplicando, multiplicador, contador:inteiro
        inicio
              escreva("Digite o n�mero a ser multiplicado: ")
              leia(multiplicador)
              escreva("Digite o n�mero at� onde a tabuada ir�: ")
              leia(contador)
              para multiplicando <- 1 ate contador faca
                   escreval(multiplicador, " X ", multiplicando, " = ", multiplicando * multiplicador)
              fimpara
      fimprocedimento
      
      tabuada()
fimalgoritmo
