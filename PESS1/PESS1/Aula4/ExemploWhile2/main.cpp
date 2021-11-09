#include <iostream>
#include <locale>

using namespace std;

int main() {
    
    setlocale(LC_ALL, "Portuguese");
    int i = 1; //variável iniciando em 1
    
    while(i <= 10)
    {
        cout << "Número = " << i << endl;
        i = i + 1;
    }
    
    return 0;
}