#include <iostream>

using namespace std;

int main() {
    int i;
    int multiplicador = 6;
    int multiplo = 0;
    for(i = 10; i > 0; --i)
    {
        multiplo = i * multiplicador;
        cout << i << " X " << multiplicador << " = " << multiplo << endl;
    }
    cout << "Multiplo atual: " << multiplo << endl;
    return 0;
}

