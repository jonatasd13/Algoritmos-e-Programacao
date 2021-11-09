//Desenvolva um algoritmo que efetue o cálculo da tabuada de um número que
//deverá ser solicitado ao usuário do sistema. O cálculo deverá ser realizado através
//de um procedimento que receberá o número digitado e mostrará o resultado na tela.
//Vamos tomar como exemplo que o usuário digitou o número 2,
//a resposta na tela deve ser acordo com o exemplo abaixo:
//2 X 1 = 2, 2 X 2 = 4...2 X 10 = 20

algoritmo "procedimento_tabuada"

var

inicio
      procedimento tabuada()
        var
           multiplicando, multiplicador, contador:inteiro
        inicio
              escreva("Digite o número a ser multiplicado: ")
              leia(multiplicador)
              escreva("Digite o número até onde a tabuada irá: ")
              leia(contador)
              para multiplicando <- 1 ate contador faca
                   escreval(multiplicador, " X ", multiplicando, " = ", multiplicando * multiplicador)
              fimpara
      fimprocedimento
      
      tabuada()
fimalgoritmo
