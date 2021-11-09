#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char** argv) {

    int nota1, nota2, mediaFinal;
    
    cout << "Digite o valor da primeira nota: ";
    cin >> nota1;
    cout << "Digite o valor da segunda nota nota: ";
    cin >> nota2;
    mediaFinal = (nota1 + nota2) / 2;
    cout << "A média final é: " << mediaFinal;
    
    return 0;
}