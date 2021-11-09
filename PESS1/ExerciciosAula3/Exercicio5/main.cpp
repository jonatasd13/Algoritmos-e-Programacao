#include <iostream>
#include <locale>

using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");
    
    int n1, n2, n3, maior;
    
    cout << "Digite um número: ";
    cin >> n1;
    cout << "Digite outro número: ";
    cin >> n2;
    cout << "Digite mais um número: ";
    cin >> n3;

    if(n1 > n2){
    	maior = n1;
    }else{
        maior = n2;
    }
    if(n3 > maior){
        maior = n3;   
    }
    
    cout << "O maior número é " << maior;
    return 0;
}