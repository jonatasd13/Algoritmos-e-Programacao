#include <iostream>
#include "cCliente.h"

using namespace std;

cCliente::cCliente() {
}

cCliente::cCliente(const cCliente& orig) {
}

cCliente::~cCliente() {
}

void cCliente::lerDados(){
    
    for (int i=0; i<=1; i++){
        cout << "Digite o nome do cliente " << (i+1) << ": ";
        cin >> this->DadosClientes[i].nome;
        cout << "Digite a matrícula do cliente " << (i+1) << ": ";
        cin >> this->DadosClientes[i].matricula;
        
        for (int j=0; j<=1; j++){
            cout << "Digite a nota " << (j+1) << ": ";
            cin >> this->DadosClientes[i].notas[j];
        }
        this->DadosClientes[i].media = (this->DadosClientes[i].notas[0] + this->DadosClientes[i].notas[1])/2;
    }   
}

void cCliente::imprimirDados(){
    
    for (int i=0; i<=1; i++){
        cout << "\nO nome do cliente " << (i+1) << " é: " << this->DadosClientes[i].nome;
        cout << "\nA matrícula do cliente " << (i+1) << " é: " << this->DadosClientes[i].matricula;
        cout << "\nA media do cliente " << (i+1) << " é: " << this->DadosClientes[i].media;
    }
    
}