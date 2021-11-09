#include <cstdlib>
#include <iostream>
#include "volumeEsfera.h"

using namespace std;

int main(int argc, char** argv) {

    volumeEsfera obj1;
    obj1.lerDados();
    cout << endl << "O volume da esfera é: " << obj1.calcVolume();
    
    return 0;
}

