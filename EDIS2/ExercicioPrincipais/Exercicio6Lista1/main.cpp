#include <cstdlib>
#include <iostream>
#include "calcTempoFabrica.h"

using namespace std;

int main(int argc, char** argv) {
    calcTempoFabrica obj1;
    obj1.lerDados();
    cout << "\nA idade em horas é: " << obj1.calcularTempo();
    cout << "\nA idade em minutos é: " << obj1.calcularTempo2();
    cout << "\nA idade em segundos é aproximadamente: " << obj1.calcularTempo3();
    
    return 0;
}

