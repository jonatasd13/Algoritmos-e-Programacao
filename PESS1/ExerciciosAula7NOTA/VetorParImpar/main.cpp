#include <iostream>
#include <locale>

using namespace std;

int main() 
{
    int numeros[15], i = 0, par;
    
    for (i; i < 15; i++){
        cout << "Digite o " << (i+1) << "º número: " << endl;
        cin >> numeros[i];
        par = numeros[i] % 2;
        if (par == 0){
            cout << "O número " << numeros[i] << " é: par\n" << endl;
        } else{
            cout << "O número " << numeros[i] << " é: ímpar\n" << endl;
        }
    }
    return 0;
}

