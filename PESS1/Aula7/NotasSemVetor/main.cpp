#include <iostream>

using namespace std;

int main() 
{
    int nota0, nota1, nota2, nota3, nota4, media = 0;
    cout << "Digite a nota do aluno 1: " << endl;
    cin >> nota0;
    cout << "Digite a nota do aluno 2: " << endl;
    cin >> nota1;
    cout << "Digite a nota do aluno 3: " << endl;
    cin >> nota2;
    cout << "Digite a nota do aluno 4: " << endl;
    cin >> nota3;
    cout << "Digite a nota do aluno 5: " << endl;
    cin >> nota4;
    media = (nota0 + nota1 + nota2 + nota3 + nota4)/5;
    cout << endl << "Média das notas: " << media;
    return 0;
}

