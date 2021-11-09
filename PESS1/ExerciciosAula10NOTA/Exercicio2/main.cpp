#include <iostream>

using namespace std;

double fatorial(int);
int main()
{
  int numero;
  
  cout << "Digite o numero que deseja calcular o fatorial: ";
  cin >> numero;
  
  cout << "Fatorial de " << numero << " é igual a: " << fatorial(numero);
  
  return 0;
}

double fatorial(int n)
{
  double resultado;
  
  if ( n <= 1 )
    return (1);
  else
  {
    resultado = n * fatorial(n - 1);
    return resultado;
  }
}