#include <iostream>
#include "cProdutos.h"

using namespace std;

cProdutos::cProdutos() {
}

cProdutos::cProdutos(const cProdutos& orig) {
}

cProdutos::~cProdutos() {
}

void cProdutos::lerDados(){
    
    char opcao;
    int limite = 0;
    int codigobusca;
    
    do{
        cout << "Digite o nome do produto: ";
        cin >> this->vetProdutos[limite].nome;
        
        cout << "Digite o código do produto: ";
        cin >> this->vetProdutos[limite].codigo;
        
        cout << "Digite o preço do produto: ";
        cin >> this->vetProdutos[limite].preco;
        
        cout << "Deseja continuar cadastrando? Para continuar digite S: ";
        cin >> opcao;
        limite++;
    }while((opcao == 'S')&&(limite < 3));

    cout << "Digite o código para buscar: ";
    cin >> codigobusca;
    
    if((this->localizaBinaria(limite, codigobusca)) != -1){
        cout << "Produto encontrado!";
        cout << "\nO preço dele é: " << vetProdutos[(this->localizaBinaria(limite, codigobusca))].preco;
    } else {
        cout << "Produto inexistente!";
    }
}

void cProdutos::localizaSequencial(int limite, int codigobusca){
    
    for(int i=0; i<limite; i++){
        if(codigobusca == this->vetProdutos[i].codigo){
            cout << "Produto encontrado!";
        }
    }
}

int cProdutos::localizaBinaria(int Contador, int codigobusca){
    int inf, sup, meio;
    inf = 0;
    sup = Contador - 1;
    
    while(inf <= sup){
        meio = (inf + sup)/2;
        
        if(codigobusca == this->vetProdutos[meio].codigo){
            return meio;
        }else
            if(codigobusca < this->vetProdutos[meio].codigo){
                sup = meio - 1;
            } else{
                inf = meio + 1;
            }
    }
    return -1;
}

void cProdutos::ordenacaoBolha(int limite){
    int i, j;
    int temp;
    
    for(i = limite-1; i >= 1; i--){
        for(j = 0; j < i; j++){
            if(this->vetProdutos[j].codigo > this->vetProdutos[j+1].codigo){
                temp = this->vetProdutos[j].codigo;
                this->vetProdutos[j].codigo = this->vetProdutos[j+1].codigo;
                this->vetProdutos[j+1].codigo = temp;
            }
        }
    }
}

void cProdutos::imprimirProdutos(int limite){
    for(int i=0; i<limite; i++){
        cout << this->vetProdutos[i].codigo;
    }
}