//Faça um algoritmo que receba três notas de um aluno como parâmetros
//e o tipo da média que deverá ser calculada.
//Se o tipo da média for "A" a função calcula a média aritmética das notas do aluno,
//se for "P" a função calcula a média ponderada pesos 5, 3 e 2.
//A média calculada deve ser devolvida ao programa principal para, então, ser mostrada.

algoritmo "medias_func"

var
   valor_media:caractere
inicio
         funcao md_arit():real
                var
                   n1, n2, n3, media_a:real
                inicio
                   escreva("Digite a nota 1: ")
                   leia(n1)
                   escreva("Digite a nota 2: ")
                   leia(n2)
                   escreva("Digite a nota 3: ")
                   leia(n3)
                   media_a <- (n1 + n2 + n3)/3
                   retorne media_a
         fimfuncao
      
         funcao md_pond():real
                var
                   n1, n2, n3, media_p:real
                inicio
                      escreva("Digite a nota 1, peso 5: ")
                      leia(n1)
                      escreva("Digite a nota 2, peso 3: ")
                      leia(n2)
                      escreva("Digite a nota 3, peso 2: ")
                      leia(n3)
                      media_p <- ((n1*5)+(n2*3)+(n3*2))/10
                      retorne media_p
         fimfuncao

         escreval("Aperte A para calcular a média aritmética, ")
         escreva("caso queira calcular a média ponderada aperte P: ")
         leia(valor_media)
         
         escolha valor_media
             caso "A"
                  escreva("A média aritmética é: ", md_arit())
             caso "P"
                  escreva("A média ponderada é: ", md_pond())
         fimescolha
fimalgoritmo
