#include <iostream>

using namespace std;

int quadrado (int x){
  int resultado;
  resultado = x * x;
  return resultado;
}

int main(){
    int a;
    cout << "Programa quadrado." << endl << endl;
    cout << "Digite um número inteiro:" << endl;
    cin >> a;
    cout << "O quadrado de: " << a << " é: " << quadrado(a);
    return 0;
}