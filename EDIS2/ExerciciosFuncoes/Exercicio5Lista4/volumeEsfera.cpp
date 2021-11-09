#include <cstdlib>
#include <iostream>
#include <math.h>
#include "volumeEsfera.h"

using namespace std;

volumeEsfera::volumeEsfera() {
}

volumeEsfera::volumeEsfera(const volumeEsfera& orig) {
}

volumeEsfera::~volumeEsfera() {
}

void volumeEsfera::lerDados(){
    
    cout << "Digite o valor do raio: ";
    cin >> raio;
}

float volumeEsfera::calcVolume(){
    
    volume = sqrt(pow((raio), 3))*(4/3)*pi;
    
    return volume;
}