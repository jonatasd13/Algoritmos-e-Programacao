#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char** argv) {

    int ano = 2021;
    int nascimento, idade;
    
    cout << "Digite a sua idade: ";
    cin >> idade;
    nascimento = ano - idade;
    cout << "Você nasceu em: " << nascimento;
    ano = 2000;
    cout << "\n Digite a sua idade: ";
    cin >> idade;
    nascimento = ano - idade;
    cout << "Voce nasceu em: " << nascimento;
    
    return 0;
}