#ifndef RETORNAVALOR_H
#define RETORNAVALOR_H

class retornaValor {
public:
    retornaValor();
    retornaValor(const retornaValor& orig);
    virtual ~retornaValor();
    
    int valor;
    void lerDados();
    int verificaValor();
    
private:

};

#endif /* RETORNAVALOR_H */

