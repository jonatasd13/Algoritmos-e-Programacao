//Fa�a um algoritmo que fique mostrando a mensagem "Comando enquanto".
//A cada frase mostrada, o algoritmo deve perguntar se o usu�rio gostaria de mostrar a mensagem novamente,
//se ele responder S para sim o sistema ir� mostrar a mensagem novamente.
//Caso contr�rio, se ele responder N para n�o o sistema finaliza sua execu��o.

algoritmo "mensagem enquanto"

var letra:literal

inicio
      escreval("* Comando enquanto! *")
      escreval("Gostaria de mostrar essa mensagem novamente: ")
      leia(letra)
      se(letra = "N")entao
       escreval("Fim do comando!")
      senao
       se((letra <> "S") e (letra <> "N"))entao
        escreval("Letra digitada n�o pode ser aceita.")
       senao
         enquanto letra <> "N" faca
          escreval("Gostaria de mostrar essa mensagem novamente: ")
          leia(letra)
         fimenquanto
        escreval("Fim do comando!")
       fimse
      fimse

fimalgoritmo
