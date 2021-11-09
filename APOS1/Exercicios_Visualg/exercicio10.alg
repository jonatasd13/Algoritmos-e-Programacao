//Faça um algoritmo que fique mostrando a mensagem "Comando enquanto".
//A cada frase mostrada, o algoritmo deve perguntar se o usuário gostaria de mostrar a mensagem novamente,
//se ele responder S para sim o sistema irá mostrar a mensagem novamente.
//Caso contrário, se ele responder N para não o sistema finaliza sua execução.

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
        escreval("Letra digitada não pode ser aceita.")
       senao
         enquanto letra <> "N" faca
          escreval("Gostaria de mostrar essa mensagem novamente: ")
          leia(letra)
         fimenquanto
        escreval("Fim do comando!")
       fimse
      fimse

fimalgoritmo
