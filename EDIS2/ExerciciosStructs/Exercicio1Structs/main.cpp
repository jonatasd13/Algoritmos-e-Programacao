#include <cstdlib>
#include "cCliente.h"

using namespace std;

int main(int argc, char** argv) {

    cCliente *obj = new cCliente();
    obj->lerDados();
    obj->imprimirDados();
    return 0;
}

