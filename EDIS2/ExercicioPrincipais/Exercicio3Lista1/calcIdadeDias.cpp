#include <cstdlib>
#include <iostream>
#include "calcIdadeDias.h"

using namespace std;

calcIdadeDias::calcIdadeDias() {
}

calcIdadeDias::calcIdadeDias(const calcIdadeDias& orig) {
}

calcIdadeDias::~calcIdadeDias() {
}

void calcIdadeDias::lerDados(){
    
    cout << "Digite quantos anos tem: ";
    cin >> anos;
    cout << "Digite quantos meses tem: ";
    cin >> meses;
    cout << "Digite qual dia do mês atual é: ";
    cin >> dias;
    
    cout << "\nA idade em dias é aproximadamente: ";
}

int calcIdadeDias::calcularIdade(){
    
    dias += (anos * dias_do_ano) + (meses * dias_do_mes);
    
    return dias;
}
