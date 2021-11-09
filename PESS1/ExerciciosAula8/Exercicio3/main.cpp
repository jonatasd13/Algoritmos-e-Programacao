#include <iostream>
#include <iomanip>

using namespace std;

int main() 
{
    int lin = 3, col = 3;
    int matriz1[lin][col];
    int matriz2[lin][col];
    int matrizsoma[lin][col];
    int i, j;
    for (i = 0; i < lin; i++){
        for(j = 0; j < col; j++){
            cout << "Digite o valor para preencher a matriz 1 [" << i << ", " << j << "]: " << endl;
            cin >> matriz1[i][j];
            cout << "Digite o valor para preencher a matriz 2 [" << i << ", " << j << "]: " << endl;
            cin >> matriz2[i][j];
        
            matrizsoma[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }
    cout << endl;
    
    cout << "Matriz Soma: " << endl;
    for (i = 0; i < lin; i++){
        for(j = 0; j < col; j++){
            cout << matrizsoma[i][j] << "\t";
        }
        cout << endl;
    }
    return 0;
}