#include <iostream>
#include <locale>

using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");
    int n1, n2;
    
    cout << "Digite um número: ";
    cin >> n1;
    cout << "Digite outro número: ";
    cin >> n2;
    if(n1 > n2)
    {
        cout << n1 << " é maior que " << n2;
    } else
        cout << n2 << " é maior que " << n1;
    
    return 0;
}

