#include <cstdlib>
#include <iostream>
#include <math.h>
#include "funcDelta.h"

using namespace std;

funcDelta::funcDelta() {
}

funcDelta::funcDelta(const funcDelta& orig) {
}

funcDelta::~funcDelta() {
}

void funcDelta::lerDados(){
    
    cout << "Digite de A: ";
    cin >> a;
    cout << "Digite de B: ";
    cin >> b;
    cout << "Digite de C: ";
    cin >> c;
}

int funcDelta::calcResultado(){
    
    resultado = sqrt(pow((b), 2)) - (4*a*c);
    
    return resultado;
}