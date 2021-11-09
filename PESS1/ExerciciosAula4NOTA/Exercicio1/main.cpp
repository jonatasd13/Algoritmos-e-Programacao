#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale (LC_ALL, "Portuguese");
    int idade;
    
    cout << "Digite a idade do narrador:\n";
    cin >> idade;
    if(idade >= 5 && idade <= 100)
    {
        if(idade >= 5 && idade <= 7)
        {
            cout << "Narrador tem " << idade << 
                    " anos e se enquadra na faixa etária: Infantil A" << endl;
        }
        if(idade >= 8 && idade <= 10)
        {
            cout << "Narrador tem " << idade << 
                    " anos e se enquadra na faixa etária: Infantil B" << endl;
        }
        if(idade >= 11 && idade <= 13)
        {
            cout << "Narrador tem " << idade << 
                    " anos e se enquadra na faixa etária: Juvenil A" << endl;
        }
        if(idade >= 14 && idade <= 17)
        {
            cout << "Narrador tem " << idade << 
                    " anos e se enquadra na faixa etária: Juvenil B" << endl;
        }
        if(idade >= 18)
        {
            cout << "Narrador tem " << idade << 
                    " anos e se enquadrada na faixa etária: Adulto" << endl;
        }
    } else {
        cout << "A idade é inválida!\n";
    }
    return 0;
}