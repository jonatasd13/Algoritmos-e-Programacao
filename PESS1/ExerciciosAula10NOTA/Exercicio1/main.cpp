#include <iostream>

using namespace std;

float capacidade (float);

int main(){
    float fa;
    cout << "Programa para calcular a equivalência de Fahrenheit com Celsius: " << endl << endl;
    cout << "Digite a temperatura em Fahrenheit: ";
    cin >> fa;
    cout << fa << "°F são equivalentes a: " << capacidade(fa) << "°C.";
    return 0;
}

float capacidade (float fahrenheit){
  float resultado;
  resultado = (fahrenheit - 32) * 0.555555556;
  return resultado;
}