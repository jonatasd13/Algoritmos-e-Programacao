#include <cstdlib>
#include <iostream>
#include "cProdutos.h"

using namespace std;

int main(int argc, char** argv) {
    
    cProdutos *obj1P = new cProdutos;
    obj1P->lerDados();
    
    return 0;
}