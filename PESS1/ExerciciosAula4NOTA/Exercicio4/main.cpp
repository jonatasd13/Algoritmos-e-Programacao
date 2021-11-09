#include <iostream>

using namespace std;

int main() {
    int opc;
    double num1, num2, resultado;
    
    cout << "Digite 1 para Somar\n";
    cout << "Digite 2 para Subtrair\n";
    cout << "Digite 3 para Sair\n";
    
    while(opc != 3)
    {
        cin >> opc;
        
        switch(opc)
        {
            case 1:
                cout << "Digite um número: ";
                cin >> num1;
                cout << "Digite outro número: ";
                cin >> num2;
                
                resultado = num1 + num2;
                cout << num1 << " + " << num2 << " = " << resultado << endl;
                break;
            case 2:
                cout << "Digite um número: ";
                cin >> num1;
                cout << "Digite outro número: ";
                cin >> num2;
                
                resultado = num1 - num2;
                cout << num1 << " - " << num2 << " = " << resultado << endl;
                break;
            case 3:
                cout << "Programa fechado. ";
                break;
            default:
                cout << "Opção inválida!\n";
        }
    }
    cout << "Você optou sair!";
    
    return 0;
}

