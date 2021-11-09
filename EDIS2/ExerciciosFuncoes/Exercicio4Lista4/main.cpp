#include <iostream>
#include <cstdlib>
#include "funcDelta.h"

using namespace std;

int main(int argc, char** argv) {
    
    funcDelta obj1;
    obj1.lerDados();
    cout << "O valor de Delta é: " << obj1.calcResultado();
    
    return 0;
}

