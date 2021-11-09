#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int i, a = 100, b = 200, soma;
       
    cout << "* Mostrar números de " << a << " a " << b << "! *" << endl;
    for(i = a; i <= b; i = i + 2){
        soma += i;
        cout << i << endl; 
    }
    cout << "A soma dos pares contidos de 100 a 200 é: " << soma; 
    return 0;
}