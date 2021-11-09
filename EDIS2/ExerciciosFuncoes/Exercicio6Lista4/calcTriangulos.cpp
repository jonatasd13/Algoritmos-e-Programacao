#include <cstdlib>
#include <iostream>
#include "calcTriangulos.h"

using namespace std;

calcTriangulos::calcTriangulos() {
}

calcTriangulos::calcTriangulos(const calcTriangulos& orig) {
}

calcTriangulos::~calcTriangulos() {
}

void calcTriangulos::lerDados(){
    
    cout << "Digite o valor do lado X: ";
    cin >> X;
    cout << "Digite o valor do lado Y: ";
    cin >> Y;
    cout << "Digite o valor do lado Z: ";
    cin >> Z;
}

char calcTriangulos::identificaTriangulo(){
    
    float somaX, somaY, somaZ;
    char a = '.';
    
    somaX = Y + Z;
    somaY = X + Z;
    somaZ = X + Y;
    
    cout << "Estes valores dizem que isso ";
    
    if(X < somaX && Y < somaY && Z < somaZ){
        cout << "é";
    }else {
        cout << "não é um triângulo";
        return a;
    }
    
    cout << " um triângulo ";
    
    if(X == Y && X == Z && Y == Z){
        cout << "equilátero";
        return a;
    }else
        if(X == Y || X == Z || Y == Z){
            cout << "isósceles";
            return a;
        } else
            if(X != Y && X != Z && Y != Z){
                cout << "escaleno";
                return a;
            }
}