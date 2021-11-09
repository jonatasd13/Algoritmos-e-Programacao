#include <iostream>
#include <locale>
#include <iomanip>

using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");
    int idade = 19;
    long long int cpf = 22345500000458791;
    float salario = 1248.50;
    double pi = 3.141524999998091;
    char sexo = 'F';
    char nome[50] = "Linguagem C";
    
    cout << "Idade: " << idade << endl;
    cout << "CPF: " << cpf << endl;
    cout << fixed << setprecision(2);
    cout << "Salário: " << salario << endl;
    cout << "Pi: " << pi << endl;
    cout << "Sexo: " << sexo << endl;
    cout << "Nome: " << nome << endl;
    
    return 0;
}

