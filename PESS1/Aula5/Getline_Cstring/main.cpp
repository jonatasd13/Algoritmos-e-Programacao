#include <iostream>
#include <locale>
#include <cstring>

using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");
    
    //char nome[40];
    string nome;
    cout << "Programa para utilizar funções de entrada e saída de dados.\n\n";
    
    cout << "Informe seu nome completo: ";
    getline(cin, nome);
    //cin >> nome
    cout << "\nSeu nome é: " << nome << endl;
    
    return 0;
}

