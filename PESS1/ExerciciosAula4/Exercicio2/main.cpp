#include <iostream>
#include <locale>

using namespace std;

int main() {
    
    setlocale(LC_ALL, "Portuguese");
    int i = 1;    
    
    while(i <= 100)
    {
        if(i % 10 == 0)
        {
            cout << "Número = " << i << endl;
            i = i + 1;
        }
    }
    
    return 0;
}