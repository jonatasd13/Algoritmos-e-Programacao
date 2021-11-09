#include <cstdlib>
#include <iostream>
#include <math.h>
#include "calcDistanciaEuclidiana.h"

using namespace std;

calcDistanciaEuclidiana::calcDistanciaEuclidiana() {
}

calcDistanciaEuclidiana::calcDistanciaEuclidiana(const calcDistanciaEuclidiana& orig) {
}

calcDistanciaEuclidiana::~calcDistanciaEuclidiana() {
}

void calcDistanciaEuclidiana::lerDados(){
    cout << "Digite o valor de x1: ";
    cin >> x1;
    cout << "Digite o valor de y1: ";
    cin >> y1;
    cout << "Digite o valor de x2: ";
    cin >> x2;
    cout << "Digite o valor de y2: ";
    cin >> y2;
}

float calcDistanciaEuclidiana::calcularDE(){
    
    float d;
    d = sqrt(pow((x2-x1), 2) + pow((y2-y1), 2));
    return d;
}