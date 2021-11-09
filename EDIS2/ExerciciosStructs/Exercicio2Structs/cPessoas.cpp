#include <iostream>
#include <cmath>
#include "cPessoas.h"

using namespace std;

cPessoas::cPessoas() {
}

cPessoas::cPessoas(const cPessoas& orig) {
}

cPessoas::~cPessoas() {
}

void cPessoas::lerDados(){
    
    char opcao;
    int contador = 0, cpfbusca = 0;
    float imc = 0.0;
    
    do{
        cout << "Digite seu nome: ";
        cin >> this->vetPessoas[contador].nome;
                
        cout << "Digite seu altura: ";
        cin >> this->vetPessoas[contador].altura;
        
        cout << "Digite seu peso: ";
        cin >> this->vetPessoas[contador].peso;
        
        cout << "Digite seu cpf: ";
        cin >> this->vetPessoas[contador].cpf;
        
        cout << "Digite seu sexo: ";
        cin >> this->vetPessoas[contador].sexo;
        
        contador++;
        
        cout << "Deseja continuar cadastrando? Para continuar digite S: ";
        cin >> opcao;
    }while((opcao == 'S')&&(contador < 3));
    
    cout << "Digite um CPF para localizar e calcular o IMC: ";
    cin >> cpfbusca;
    cout << "O IMC do usuário é: ";
    imc = this->localizaCalcIMC(cpfbusca, contador);
    cout << imc;
}

float cPessoas::localizaCalcIMC(int cpfBusca, int Contador){
    
    float imc = 0.0;
    
    for (int i=0; i<Contador; i++){
        if(cpfBusca == this->vetPessoas[i].cpf){
            imc = (this->vetPessoas[i].peso / pow(this->vetPessoas[i].altura, 2));
        }
    }
    return imc;
}