#include <iostream>
#include <locale>

using namespace std;

int main() {
    
    setlocale(LC_ALL, "Portuguese");
    
    int golsCorinthians, golsSaoPaulo;
    
    cout << "\n*** Placar Corinthians X São Paulo ***\n";
    cout << "Digite a quantidade de gols do Corinthians: ";
    cin >> golsCorinthians;
    cout << "\nDigite a quantidade de gols do São Paulo: ";
    cin >> golsSaoPaulo;
    if(golsCorinthians > golsSaoPaulo)
        cout << "A festa é alvinegra!\n";
    else
    {
        cout << "A festa é dos bambis!\n";
        cout << "SQN! A freguesia sempre vai imperar!";
    }

    return 0;
}