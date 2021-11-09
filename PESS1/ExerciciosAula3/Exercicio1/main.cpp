#include <iostream>
#include <locale>

using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");
    char nome[40];
    double tempo, tempocon, velocidade, distancia;
    
    cout << "Digite o nome: " << endl;
    cin >> nome;
    cout << "Qual foi distância percorrida em quilômetros: " << endl;
    cin >> distancia;
    cout << "Quanto tempo em minutos, demorou para chegar ao seu destino: " << endl;
    cin >> tempo;
    tempocon = tempo/60;
    velocidade = distancia/tempocon;
    
    cout << "Olá " << nome << ", você percorreu " << distancia << "km em " 
            << tempo << " minutos" << ", sua velocidade média foi: " << velocidade << "km/h";
    return 0;
}