//Solicite o nome do usuário;
//Solicite o ano de nascimento e o ano atual;
//Calcule a idade em dias;
//Mostre o nome e a idade calculada
algoritmo "calculoidade"

var nome:literal
    data_nasc, data_atual, dia, mes, ano, dia2, mes2, ano2, idade_calc:inteiro

inicio
      escreva("Digite seu nome: ")
      leia(nome)
      escreva("Digite o dia que você nasceu: ")
      leia(dia)
      escreva("Digite o mes que você nasceu: ")
      leia(mes)
      escreva("Digite o ano que você nasceu: ")
      leia(ano)
      data_nasc <- dia + (mes * 30) + (ano * 365)
      escreva("Digite o dia atual: ")
      leia(dia2)
      escreva("Digite o mes atual: ")
      leia(mes2)
      escreva("Digite o ano atual: ")
      leia(ano2)
      data_atual <- dia2 + (mes2 * 30) + (ano2 * 365)
      idade_calc <- data_atual - data_nasc
      escreva("Seu nome é ", nome, " e sua idade em dias é ", idade_calc)

fimalgoritmo
