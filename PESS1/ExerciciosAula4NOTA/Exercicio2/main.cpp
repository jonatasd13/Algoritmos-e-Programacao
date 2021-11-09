#include <iostream>

using namespace std;

int main()
{
    int opc;

    cout << "1 - São Paulo\n";
    cout << "2 - Santos\n";
    cout << "3 - Palmeiras\n";
    cout << "4 - Corinthians\n";

    cin >> opc;

    switch(opc)
    {
        case 1:
            cout << "Vai Tricolor Paulista! \n";
            break;
        case 2:
            cout << "Vamos Peixão! \n";
            break;
        case 3:
            cout << "Vai Palestra! \n";
            break;
        case 4:
            cout << "Vai Corinthians! \n";
            break;
        default:
            cout << "Opção inválida\n";
    }
    return 0;
}