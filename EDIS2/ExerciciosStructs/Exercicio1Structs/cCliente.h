#ifndef CCLIENTE_H
#define CCLIENTE_H

class cCliente {
public:
    
    struct Cliente{
        char nome[40];
        long int matricula;
        float notas[2], media;
    }DadosClientes[2];
    
    cCliente();
    cCliente(const cCliente& orig);
    virtual ~cCliente();
    
    void lerDados();
    void imprimirDados();
    
private:

};

#endif /* CCLIENTE_H */

