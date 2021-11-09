#include <iostream>
     using namespace std;

// definicao da funcao oi()
     void oi(void)
     {
        cout << "Oi, esse é o primeiro exemplo de definição de FUNÇÃO em C++." << endl;
        cout << "Ainda veremos outros exemplos." << endl << endl;
     }

     // definicao da funcao main()
     int main ()
     {
        int i;

        i = 1;
        while (i <= 5)
        {
            oi();
            i = i + 1;
        }
     }