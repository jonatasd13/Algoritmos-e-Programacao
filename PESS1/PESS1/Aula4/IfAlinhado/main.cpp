#include <iostream>
#include <locale>

using namespace std;

int main()
{
setlocale (LC_ALL, "Portuguese");
float media;

 cout << "Digite a média do aluno!!!\n";
cin >> media;

 if(media >= 0 && media <= 10)
{
cout << "A média é válida!!!\n";
if(media >= 6)
{
cout << "Aluno foi aprovado com média " << media << " !!!" << endl;
}
else// do if interno
{
cout << "Aluno foi reprovado com média " << media << endl;
}
}
else
{
cout << "A média é inválida!!!\n";
}
return 0;
}