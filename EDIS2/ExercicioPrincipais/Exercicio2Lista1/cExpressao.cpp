#include <cstdlib>
#include <iostream>
#include <math.h>
#include "cExpressao.h"

using namespace std;

cExpressao::cExpressao() {
}

cExpressao::cExpressao(const cExpressao& orig) {
}

cExpressao::~cExpressao() {
}

void cExpressao::lerDados(){
    
    cout << "Digite o valor A: ";
    cin >> A;
    cout << "Digite o valor B: ";
    cin >> B;
    cout << "Digite o valor C: ";
    cin >> C;
}

float cExpressao::calcularExpressao(){
    
    R = pow((A + B), 2);
    S = pow((B + C), 2);
    D = (R + S)/2;
    
    return D;
}

