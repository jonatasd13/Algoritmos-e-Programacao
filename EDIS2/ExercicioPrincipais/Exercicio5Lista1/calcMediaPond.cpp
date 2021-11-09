#include <cstdlib>
#include <iostream>
#include "calcMediaPond.h"

using namespace std;

calcMediaPond::calcMediaPond() {
}

calcMediaPond::calcMediaPond(const calcMediaPond& orig) {
}

calcMediaPond::~calcMediaPond() {
}

void calcMediaPond::lerDados(){
    
    cout << "Digite a 1ª nota de peso 2: ";
    cin >> nota1;
    cout << "Digite a 2ª nota de peso 3: ";
    cin >> nota2;
    cout << "Digite a 3ª nota de peso 5: ";
    cin >> nota3;
}

float calcMediaPond::calcularMedia(){
    
    mediap = ((nota1*2) + (nota2*3) + (nota3*5)) / 10;
    
    return mediap;
}