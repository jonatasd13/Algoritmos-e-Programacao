#include <iostream>
#include "sContasBancarias.h"

using namespace std;

sContasBancarias::sContasBancarias() {
}

sContasBancarias::sContasBancarias(const sContasBancarias& orig) {
}

sContasBancarias::~sContasBancarias() {
}

void sContasBancarias::lerDados(){

    int limite = 0;
    int cpfbusca;
    char tipoInteracao;
    float mudancaBancaria, saque, deposito;

    do{
        cout << "Digite o nome: ";
        cin >> this->vetClientes[limite].nome;
        
        cout << "Digite o depósito inicial: ";
        cin >> this->vetClientes[limite].depositoinicial;
        
        cout << "Digite o cpf: ";
        cin >> this->vetClientes[limite].cpf;
        
        limite++;
    }while(limite < 3);

    cout << "Digite o cpf para buscar: ";
    cin >> cpfbusca;
    
    if((this->localizaBinaria(limite, cpfbusca)) != -1){
        cout << "Cliente encontrado!";
        
        cout << "\nDigite o tipo de interação com a conta."
                "\nSe quiser sacar, digite S."
                "\nPorém, se quiser depositar, digite D: ";
        cin >> tipoInteracao;

        if(tipoInteracao == 'S'){
            cout << "Digite quanto quer sacar da conta: ";
            cin >> saque;
            
            mudancaBancaria = 
                    (this->vetClientes[(this->localizaBinaria(limite, cpfbusca))].
                    depositoinicial - saque);
        }else
            if(tipoInteracao == 'D'){
            cout << "Digite quanto quer depositar da conta: ";
            cin >> deposito;
            
            mudancaBancaria = 
                    (this->vetClientes[(this->localizaBinaria(limite, cpfbusca))].
                    depositoinicial + deposito);
        }
        
        cout << "\n\nO nome do cliente é: " << 
                this->vetClientes[(this->localizaBinaria(limite, cpfbusca))].nome;
        cout << "\nO saldo final da conta é: " << mudancaBancaria;
        
    } else {
        cout << "Cliente inexistente!";
    }
}

void sContasBancarias::localizaSequencial(int limite, int cpfbusca){
    
    for(int i=0; i<limite; i++){
        if(cpfbusca == this->vetClientes[i].cpf){
            cout << "Aluno encontrado!";
        }
    }
}

int sContasBancarias::localizaBinaria(int Contador, int cpfbusca){
    int inf, sup, meio;
    inf = 0;
    sup = Contador - 1;
    
    while(inf <= sup){
        meio = (inf + sup)/2;
        
        if(cpfbusca == this->vetClientes[meio].cpf){
            return meio;
        }else
            if(cpfbusca < this->vetClientes[meio].cpf){
                sup = meio - 1;
            } else{
                inf = meio + 1;
            }
    }
    return -1;
}

void sContasBancarias::ordenacaoBolha(int limite){
    int i, j;
    int temp;
    
    for(i = limite-1; i >= 1; i--){
        for(j = 0; j < i; j++){
            if(this->vetClientes[j].cpf > this->vetClientes[j+1].cpf){
                temp = this->vetClientes[j].cpf;
                this->vetClientes[j].cpf = this->vetClientes[j+1].cpf;
                this->vetClientes[j+1].cpf = temp;
            }
        }
    }
}

void sContasBancarias::imprimirClientes(int limite){
    for(int i=0; i<limite; i++){
        cout << this->vetClientes[i].cpf;
    }
}