#ifndef CALCTEMPOFABRICA_H
#define CALCTEMPOFABRICA_H

class calcTempoFabrica {
public:
    calcTempoFabrica();
    calcTempoFabrica(const calcTempoFabrica& orig);
    virtual ~calcTempoFabrica();
    
    int total_segundos, segundos, minutos, horas, segundos_por_hora = 3600, segundos_por_minuto = 60;
    void lerDados();
    int calcularTempo();
    int calcularTempo2();
    int calcularTempo3();
    
private:

};

#endif /* CALCTEMPOFABRICA_H */

