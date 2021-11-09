#include <iostream>
#include <locale>

using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");
    float f, c;
    
    cout << "Quantos graus Fahrenheit você quer converter: ";
    cin >> f;
    c = (f-32) * 0.5555555556;
    
    cout << f <<"ºF equivalem a aproximadamente " << c << "ºC";
    
    return 0;
}