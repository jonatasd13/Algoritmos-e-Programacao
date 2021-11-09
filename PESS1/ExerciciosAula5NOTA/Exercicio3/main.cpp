#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int i, n, m;
    cout << "Digite o valor de N: " << endl;
    cin >> n;
    cout << "Digite o valor de M: " << endl;
    cin >> m;
    if(m <= n){
        cout << "\nM não pode ser menor ou igual a N";
    }else{
        cout << "\n* Mostrar números de " << n << " a " << m << "! *" << endl;
        
        for(i = n; i <= m; i++)
            cout << i << endl;
    }
    return 0;
}