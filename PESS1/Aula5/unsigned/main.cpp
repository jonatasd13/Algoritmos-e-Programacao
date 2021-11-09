#include <iostream>
#include <locale>

using namespace std;


int main() {
    setlocale(LC_ALL, "Portuguese");
    unsigned int idade;
    
    cout << "Informe a sua idade: " << endl;
    cin >> idade;
    cout << "A sua idade é: " << idade << endl;

    return 0;
}

