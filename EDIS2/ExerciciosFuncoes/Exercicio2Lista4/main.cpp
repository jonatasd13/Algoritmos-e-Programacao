#include <cstdlib>
#include <iostream>
#include "funcMedias.h"

using namespace std;

int main(int argc, char** argv) {
    
    funcMedias obj1;
    obj1.lerDados();
    cout << obj1.calcMedia();
    
    return 0;
}

