#include <iostream>
#include <iomanip>
#include <locale>

using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");
    char nome[40];
    int i, idade, soma;
       
    cout << "* Mostrar a soma das idades *" << endl;
    for(i = 1; i <= 5; i++){
        cout << "\nNome: ";
        cin >> nome;
        cout << "\nDigite a idade: ";
        cin >> idade;
        soma += idade;
    }
    cout << "\n\nA soma das idades é: " << soma; 
    return 0;
}