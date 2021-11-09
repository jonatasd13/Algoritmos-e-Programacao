//Um funcionário recebe um salário fixo mais 4% de comissão sobre as vendas
//Faça um programa que receba o salário fixo de um funcionário e o valor total de suas vendas
//Calcule e mostre a comissão recebida em reais e o salário final do funcionário (salário fixo + comissão)

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
      escreva("A comissão pelas vendas do funcionário é: R$", comissao)
      escreva("  ")
      escreva("O salário final do funcionário é: R$", salario_t)
      

fimalgoritmo
