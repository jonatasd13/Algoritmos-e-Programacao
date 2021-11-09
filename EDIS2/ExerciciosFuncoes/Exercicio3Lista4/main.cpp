#include <cstdlib>
#include <iostream>
#include "retornaValor.h"

using namespace std;

int main(int argc, char** argv) {
    
    retornaValor obj1;
    obj1.lerDados();
    cout << "Corresponde a: " << obj1.verificaValor();
    
    return 0;
}

