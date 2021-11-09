#ifndef CALCIDADECONTRARIO_H
#define CALCIDADECONTRARIO_H


class calcIdadeContrario {
public:
    calcIdadeContrario();
    calcIdadeContrario(const calcIdadeContrario& orig);
    virtual ~calcIdadeContrario();
    
    int total_dias, dias, meses, anos, dias_do_ano = 365, dias_do_mes = 30;
    void lerDados();
    int calcularIdade();
    int calcularIdade2();
    int calcularIdade3();
    
private:

};

#endif /* CALCIDADECONTRARIO_H */

