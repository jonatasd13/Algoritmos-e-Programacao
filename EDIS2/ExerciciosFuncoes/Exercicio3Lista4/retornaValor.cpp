#include <cstdlib>
#include <iostream>
#include "retornaValor.h"

using namespace std;

retornaValor::retornaValor() {
}

retornaValor::retornaValor(const retornaValor& orig) {
}

retornaValor::~retornaValor() {
}

void retornaValor::lerDados(){
    
    cout << "Digite o valor: ";
    cin >> valor;
    
}

int retornaValor::verificaValor(){
    
    if(valor > 0){
        return 1;
    }else
        if(valor < 0){
            return -1;
        }else
            if(valor = 0){
                return 0;
            } else {
                return 0;
            }
    
}