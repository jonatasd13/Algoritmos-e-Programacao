#include <locale>
#include <iostream>

using namespace std;

int main()
{
setlocale (LC_ALL, "Portuguese");

 int num1, num2, num3, num4, num5;
bool resultado;
cout << "Operadores Lógicos" << endl;
cout << "Digite 2 números: " << endl;
cin >> num1 >> num2;
cout << "A negação do primeiro número é: " << !num1 << endl;
cout << "A operação AND entre o primeiro e segundo número é: " << (num1 && num2) << endl;
cout << "A operação OR entre o primeiro e segundo número é: " << (num1 || num2) << endl;
return 0;
}