#include <cstdlib>
#include <iostream>
#include "calcIdadeContrario.h"

using namespace std;

calcIdadeContrario::calcIdadeContrario() {
}

calcIdadeContrario::calcIdadeContrario(const calcIdadeContrario& orig) {
}

calcIdadeContrario::~calcIdadeContrario() {
}

void calcIdadeContrario::lerDados(){
    
    cout << "Digite a quantidade de dias: ";
    cin >> total_dias;

}

int calcIdadeContrario::calcularIdade(){
    
    anos = total_dias/dias_do_ano;
    total_dias = total_dias%dias_do_ano;
    
    return anos;
}

int calcIdadeContrario::calcularIdade2(){
    
    
    meses = total_dias/dias_do_mes;
    total_dias = total_dias%dias_do_mes;
    
    return meses;
}

int calcIdadeContrario::calcularIdade3(){
    
    dias = total_dias;
    
    return dias;
}