#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char** argv) {

    char nome[20], naturalidade[30];
    int idade;
    
    cout << "Digite a seu nome: ";
    cin >> nome;
    cout << "\n Digite a cidade onde você nasceu: ";
    cin >> naturalidade;
    cout << "\n Digite a sua idade: ";
    cin >> idade;
    cout << "Você nasceu em: " << naturalidade << "\nSeu nome é: " 
            << nome << "\nE você têm: " << idade << " anos";
    
    return 0;
}