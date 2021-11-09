#include <cstdlib>
#include <iostream>
#include "calcIdadeDias.h"

using namespace std;

int main(int argc, char** argv) {
    
    calcIdadeDias obj1;
    obj1.lerDados();
    cout << obj1.calcularIdade();

    return 0;
}

