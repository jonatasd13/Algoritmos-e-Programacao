//Um trabalhador recebeu o seu sal�rio e o depositou em sua conta corrente banc�ria.
//Esse trabalhador emitiu dois cheques e agora deseja saber seu saldo atual.
//Sabe-se que cada opera��o banc�ria de retirada paga um imposto de 0.38% sobre o valor retirado e o saldo inicial da conta est� zerado.
//Desenvolva um algoritmo que receba o sal�rio do trabalhador, o valor do primeiro cheque,
//o valor do segundo cheque e mostre ao final quanto sobrou na conta do trabalhador.

algoritmo "calculo_sal_2"

var nome:literal
    salario, cheque1, cheque2, imposto, saldo_bancario:real

inicio

      escreva("Digite o nome: ")
      leia(nome)
      escreva("Digite o valor do dep�sito: R$")
      leia(salario)
      escreva("Caso tenha feito, digite o valor emitido no primeiro cheque: R$")
      leia(cheque1)
      escreva("Caso tenha feito, digite o valor emitido no segundo cheque: R$")
      leia(cheque2)
      imposto <- (cheque1 * (0.38/100)) + (cheque2 * (0.38/100))
      saldo_bancario <- salario - (imposto + cheque1 + cheque2)
      escreva("O saldo banc�rio do trabalhador �: R$", saldo_bancario)


fimalgoritmo
