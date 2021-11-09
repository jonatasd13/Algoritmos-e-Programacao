#include <iostream>
#include <cctype>

using namespace std;

int main() {
    char digito;
    
    cout << "Digite uma letra: ";
    cin >> digito;
    
    digito =  toupper(digito);
    
    cout << "A letra digitada foi: " << digito << endl;

    return 0;
}

