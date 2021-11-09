#include <cstdlib>
#include <iostream>
#include "calcDistanciaEuclidiana.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    calcDistanciaEuclidiana obj1;
    obj1.lerDados();
    cout << obj1.calcularDE();

    return 0;
}

