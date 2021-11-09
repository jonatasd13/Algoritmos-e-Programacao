#include <iostream>

     using namespace std;
     
     int obtem_valor(void)
     {
         int valor;

         cout << "Entre um valor: ";
         cin >> valor;

         return valor;
     }
     
     int divisao(void)
     {
         int a, b, dividendo;
         float div;

         a = obtem_valor();
         b = obtem_valor();
         
         cout << "\nEntre um valor para dividir: ";
         cin >> dividendo;
         
         div = (a + b)/dividendo;
         
         return div;
     }

     int main()
     {   
         
         cout << divisao() << endl;
         
     }