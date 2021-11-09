#include <cstdlib>
#include <iostream>
#include "calcMediaArit.h"

using namespace std;

int main(int argc, char** argv) {
    
    calcMediaArit obj1;
    obj1.lerDados();
    cout << "A média aritmetica é: " << obj1.calcularMedia();
    cout << "\nA situação do aluno é: " << obj1.situacaoAluno();
    
    return 0;
}