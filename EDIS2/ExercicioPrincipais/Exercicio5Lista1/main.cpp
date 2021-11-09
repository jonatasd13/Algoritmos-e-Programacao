#include <cstdlib>
#include <iostream>
#include "calcMediaPond.h"

using namespace std;

int main(int argc, char** argv) {
    
    calcMediaPond obj1;
    obj1.lerDados();
    cout << "A média ponderada é: " << obj1.calcularMedia();
    
    return 0;
}

