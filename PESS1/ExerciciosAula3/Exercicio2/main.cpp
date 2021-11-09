#include <iostream>
#include <locale>

using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");
    char nome[40];
    float n1, n2, n3, media;
    
    cout << "Digite o nome: ";
    cin >> nome;
    cout << "Primeira nota: ";
    cin >> n1;
    cout << "Segunda nota:";
    cin >> n2;
    cout << "Terceira nota: ";
    cin >> n3;
    media = (n1 + n2 + n3) / 3;
    
    cout << "O aluno " << nome << " possui média " << media;
    return 0;
}