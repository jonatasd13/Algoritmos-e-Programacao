#include <iostream>
#include <locale>

using namespace std;

int main() {
    
    setlocale(LC_ALL, "Portuguese");
    int num;    
    
    do{
        cout << "Informe um número: \n";
        cin >> num;
    } while(num != 0);
    
    return 0;
}