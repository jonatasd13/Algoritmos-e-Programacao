#include <iostream>
#include <locale>

using namespace std;

int main() {
    
    setlocale(LC_ALL, "Portuguese");
    int i = 50;
    
    while(i >= 1)
    {
        cout << "Número = " << i << endl;
        i = i - 1;
    }
    
    return 0;
}