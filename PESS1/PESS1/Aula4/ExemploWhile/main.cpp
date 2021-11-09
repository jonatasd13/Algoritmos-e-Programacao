#include <iostream>

using namespace std;

int main() {
    int contador = 0;
    
    while(contador < 5)
    {
        cout << "Contador = " << contador << endl;
        contador = contador + 1;
    }
    cout << "Acabou!" << endl;
    
    return 0;
}

