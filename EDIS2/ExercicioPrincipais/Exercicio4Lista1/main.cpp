#include <cstdlib>
#include <iostream>
#include "calcIdadeContrario.h"

using namespace std;

int main(int argc, char** argv) {
    calcIdadeContrario obj1;
    obj1.lerDados();
    cout << "\nA idade em anos é: " << obj1.calcularIdade();
    cout << "\nA idade em meses é: " << obj1.calcularIdade2();
    cout << "\nA idade em dias é aproximadamente: " << obj1.calcularIdade3();

    return 0;
}

