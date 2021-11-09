#include <cstdlib>
#include <iostream>
#include "calcMenorNum.h"

using namespace std;

calcMenorNum::calcMenorNum() {
}

calcMenorNum::calcMenorNum(const calcMenorNum& orig) {
}

calcMenorNum::~calcMenorNum() {
}

void calcMenorNum::lerDados(){
    
    cout << "Digite o primeiro número: ";
    cin >> n1;
    cout << "Digite o segundo número: ";
    cin >> n2;
}

int calcMenorNum::calcResultado(){
    
    if(n1 < n2){
        return n1;
    } else{
        return n2;
    }
}