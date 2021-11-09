#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale (LC_ALL, "Portuguese");
  int a, b, c, maior_1, maior_2;

  /* Lê o primeiro conjunto de 3 valores */
  cout << "Digite o prieiro conjunto de três números inteiros: ";
  cin >> a >> b >> c;

  /* Verifica o maior dos três valores informados */
  /* Assume inicialmente que a variável 'a' tem o maior valor */
  maior_1 = a;

  /* Somente muda o valor de 'maior' se
     os valores em 'b' ou 'c' forem maiores */
  if (b > maior_1)
    {
      maior_1 = b;
    }

  if (c > maior_1)
    {
      maior_1 = c;
    }

  /* Neste ponto do programa, maior_1 contém o maior valor
     dentre os 3 primeiros valores informados
   */

  /* Lê o segundo conjunto de 3 valores */
  cout << "Digite o segundo conjunto de três números inteiros: ";
  cin >> a >> b >> c;

  /* Verifica o maior dos três valores informados */
  /* Algoritmo igual ao  acima, exceto pela variável que  recebe o maior
     valor */
  /* Assume inicialmente que a variável 'a' tem o maior valor */
  maior_2 = a;

  /* Somente muda o valor de 'maior' se
     os valores em 'b' ou 'c' forem maiores */
  if (b > maior_2)
    {
      maior_2 = b;
    }

  if (c > maior_2)
    {
      maior_2 = c;
    }

  /* Neste ponto do programa, maior_2 contém o maior valor
     dentre os 3 valores informados no 2o. conjunto de entrada
   */

  /* Calcula e exibe a soma solicitada */
  cout << endl << maior_1 << " + " << maior_2
       << " = " << maior_1 + maior_2 << endl;

}