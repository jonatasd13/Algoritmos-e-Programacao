#include <cstdlib>
#include <iostream>
#include "funcMedias.h"

using namespace std;

funcMedias::funcMedias() {
}

funcMedias::funcMedias(const funcMedias& orig) {
}

funcMedias::~funcMedias() {
}

void funcMedias::lerDados(){
    
    cout << "Digite a 1ª nota: ";
    cin >> this->nota1;
    cout << "Digite a 2ª nota: ";
    cin >> this->nota2;
    cout << "Digite a 3ª nota: ";
    cin >> this->nota3;
}

float funcMedias::calcMedia(){
    
    char tipoMedia;
    float media;
    
    cout << "\nDigite o tipo de média."
            "\nSe quiser aritmética, digite A."
            "\nPorém, se quiser ponderada, digite P: ";
    cin >> tipoMedia;
    
    if(tipoMedia == 'A'){
        media = (this->nota1+this->nota2+this->nota3)/3;
    }
    if(tipoMedia == 'P'){
        media = ((this->nota1*5)+(this->nota2*3)+(this->nota3*2))/10;
    }
    
    cout << endl << "A média é: ";
    
    return media;
}