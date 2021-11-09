#ifndef CALCIDADEDIAS_H
#define CALCIDADEDIAS_H

class calcIdadeDias {
public:
    calcIdadeDias();
    calcIdadeDias(const calcIdadeDias& orig);
    virtual ~calcIdadeDias();
    
    int dias, meses, anos, dias_do_ano = 365, dias_do_mes = 30;
    void lerDados();
    int calcularIdade();
    
private:

};

#endif /* CALCIDADEDIAS_H */

