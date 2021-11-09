#include <cstdlib>
#include <iostream>
#include "calcMediaArit.h"

using namespace std;

calcMediaArit::calcMediaArit() {
}

calcMediaArit::calcMediaArit(const calcMediaArit& orig) {
}

calcMediaArit::~calcMediaArit() {
}

void calcMediaArit::lerDados(){
    
    cout << "Digite a 1ª nota: ";
    cin >> nota1;
    cout << "Digite a 2ª nota: ";
    cin >> nota2;
    cout << "Digite a 3ª nota: ";
    cin >> nota3;
}

float calcMediaArit::calcularMedia(){
    
    mediaa = (nota1+nota2+nota3)/3;
    
    return mediaa;
}

char calcMediaArit::situacaoAluno(){
    
    if(mediaa >= 6){
        cout << "Aprovado!";
    }else{
        cout << "Reprovado!";
    }
}