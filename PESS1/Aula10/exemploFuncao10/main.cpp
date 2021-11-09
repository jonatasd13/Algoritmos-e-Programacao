#include <iostream>
using namespace std;

int main()
{
  int a, b, temp;
  cout << "Entre dois numeros: ";
  cin >> a >> b;
  cout << "Voce entrou com " << a << " e " << b << endl;

  /* Troca a com b */
  temp = a;
  a = b;
  b = temp;

  cout << "Trocados, eles sao " << a << " e " << b << endl;
}