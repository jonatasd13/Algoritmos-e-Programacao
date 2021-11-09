#include <cstdlib>
#include <iostream>
#include "calcTempoFabrica.h"

using namespace std;

calcTempoFabrica::calcTempoFabrica() {
}

calcTempoFabrica::calcTempoFabrica(const calcTempoFabrica& orig) {
}

calcTempoFabrica::~calcTempoFabrica() {
}

void calcTempoFabrica::lerDados(){
    
    cout << "Digite a quantidade do tempo de duração do evento na fábrica, expresso em segundos: ";
    cin >> total_segundos;

}

int calcTempoFabrica::calcularTempo(){
    
    horas = total_segundos/segundos_por_hora;
    total_segundos = total_segundos%segundos_por_hora;
    
    return horas;
}

int calcTempoFabrica::calcularTempo2(){
    
    
    minutos = total_segundos/segundos_por_minuto;
    total_segundos = total_segundos%segundos_por_minuto;
    
    return minutos;
}

int calcTempoFabrica::calcularTempo3(){
    
    segundos = total_segundos;
    
    return segundos;
}