#include <iostream>
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
    int limite = 0;
    int matriculabusca;
    
    do{
        cout << "Digite seu nome: ";
        cin >> this->vetPessoas[limite].nome;
                
        cout << "Digite seu altura: ";
        cin >> this->vetPessoas[limite].altura;
        
        cout << "Digite seu peso: ";
        cin >> this->vetPessoas[limite].peso;
        
        cout << "Digite seu cpf: ";
        cin >> this->vetPessoas[limite].cpf;
        
        cout << "Digite seu sexo: ";
        cin >> this->vetPessoas[limite].sexo;
        
        cout << "Digite sua matrícula: ";
        cin >> this->vetPessoas[limite].matricula;
        
        cout << "Deseja continuar cadastrando? Para continuar digite S: ";
        cin >> opcao;
        limite++;
    }while((opcao == 'S')&&(limite < 3));

    cout << "Digite a matrícula para buscar: ";
    cin >> matriculabusca;
    
    if((this->localizaBinaria(limite, matriculabusca)) != -1){
        cout << "Aluno encontrado!";
    } else {
        cout << "Aluno inexistente!";
    }
}

void cPessoas::localizaSequencial(int limite, int matriculabusca){
    
    for(int i=0; i<limite; i++){
        if(matriculabusca == this->vetPessoas[i].matricula){
            cout << "Aluno encontrado!";
        }
    }
}

int cPessoas::localizaBinaria(int Contador, int matriculabusca){
    int inf, sup, meio;
    inf = 0;
    sup = Contador - 1;
    
    while(inf <= sup){
        meio = (inf + sup)/2;
        
        if(matriculabusca == this->vetPessoas[meio].matricula){
            return meio;
        }else
            if(matriculabusca < this->vetPessoas[meio].matricula){
                sup = meio - 1;
            } else{
                inf = meio + 1;
            }
    }
    return -1;
}

void cPessoas::ordenacaoBolha(int limite){
    int i, j;
    int temp;
    
    for(i = limite-1; i >= 1; i--){
        for(j = 0; j < i; j++){
            if(this->vetPessoas[j].matricula > this->vetPessoas[j+1].matricula){
                temp = this->vetPessoas[j].matricula;
                this->vetPessoas[j].matricula = this->vetPessoas[j+1].matricula;
                this->vetPessoas[j+1].matricula = temp;
            }
        }
    }
}

void cPessoas::imprimirPessoas(int limite){
    for(int i=0; i<limite; i++){
        cout << this->vetPessoas[i].matricula;
    }
}