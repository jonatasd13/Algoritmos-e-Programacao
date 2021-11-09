#include <iostream>
#include <iomanip>

using namespace std;

int main() 
{
    int matriz[3][3];
    int i, k;
    setlocale(LC_ALL, "Portuguese");
    
    for (int i = 0; i <= 3; i++){
        for (k = 0; k <= 3; k++){
            cout << "Digite o valor para a matriz[" << i << ", " << k << "]" << endl;
            cin >> matriz[i][k];
        }
    }
    cout << endl;
    
    cout << "   ";
    cout << " " << matriz[0][1];
    cout << " " << matriz[0][2];
    cout << " " << matriz[0][3] << endl;
    cout << " " << matriz[1][0];
    cout << "   ";
    cout << " " << matriz[1][2];
    cout << " " << matriz[1][3] << endl;
    cout << " " << matriz[2][0];
    cout << " " << matriz[2][1];
    cout << "   ";
    cout << " " << matriz[2][3] << endl;
    cout << " " << matriz[3][0];
    cout << " " << matriz[3][1];
    cout << " " << matriz[3][2];
    cout << "   ";
    cout << endl;
    return 0;
}
