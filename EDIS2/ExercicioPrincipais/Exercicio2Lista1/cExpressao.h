#ifndef CEXPRESSAO_H
#define CEXPRESSAO_H

class cExpressao {
public:
    cExpressao();
    cExpressao(const cExpressao& orig);
    virtual ~cExpressao();
    
    //Objetivo: Declarar atributos e métodos
    int A, B, C, R, S;
    float D;
    void lerDados();
    float calcularExpressao();
    
private:

};

#endif /* CEXPRESSAO_H */

