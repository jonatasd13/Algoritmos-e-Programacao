//Um funcion�rio recebe um sal�rio fixo mais 4% de comiss�o sobre as vendas
//Fa�a um programa que receba o sal�rio fixo de um funcion�rio e o valor total de suas vendas
//Calcule e mostre a comiss�o recebida em reais e o sal�rio final do funcion�rio (sal�rio fixo + comiss�o)

algoritmo "calculo_sal"

var nome:literal
    salario_f, comissao, venda, salario_t:real

inicio
      escreva("Digite o nome: ")
      leia(nome)
      escreva("Digite o salario: R$")
      leia(salario_f)
      escreva("Digite o valor das vendas: R$")
      leia(venda)
      comissao <- venda * (4/100)
      salario_t <- salario_f + comissao
      escreva("A comiss�o pelas vendas do funcion�rio �: R$", comissao)
      escreva("  ")
      escreva("O sal�rio final do funcion�rio �: R$", salario_t)
      

fimalgoritmo
