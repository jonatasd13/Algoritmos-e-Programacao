#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char** argv) {

    int salario = 1000;
    int comissao = 5;
    int valorVendas, salarioFinal;
    
    cout << "Digite o valor total de vendas no mês: ";
    cin >> valorVendas;
    salarioFinal = salario + ((valorVendas * comissao) / 100);
    cout << "O salário final é: \n" << salarioFinal;
    
    return 0;
}