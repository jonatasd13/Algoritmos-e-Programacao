#include <cstdlib>
#include <iostream>
#include "calcMenorNum.h"

using namespace std;

int main(int argc, char** argv) {

    calcMenorNum obj1;
    obj1.lerDados();
    cout << "O menor número é: " << obj1.calcResultado();
    
    return 0;
}

