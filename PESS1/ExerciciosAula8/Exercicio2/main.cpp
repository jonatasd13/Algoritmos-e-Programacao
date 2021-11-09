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
    
    cout << matriz[0][0];
    cout << " " << matriz[1][1];
    cout << " " << matriz[2][2];
    cout << " " << matriz[3][3];
    cout << endl;
    return 0;
}
