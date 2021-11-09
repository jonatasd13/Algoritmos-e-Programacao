#include <cstdlib>
#include <iostream>
#include "calcTriangulos.h"

using namespace std;

int main(int argc, char** argv) {

    calcTriangulos obj1;
    obj1.lerDados();
    cout << obj1.identificaTriangulo();
    
    return 0;
}

