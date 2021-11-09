#ifndef CPRODUTOS_H
#define CPRODUTOS_H

class cProdutos {
public:
    
    struct produtos{
        char nome[40];
        int codigo;
        float preco;
    }vetProdutos[3];
    
    cProdutos();
    cProdutos(const cProdutos& orig);
    virtual ~cProdutos();
    
    void lerDados();
    void localizaSequencial(int limite, int codigobusca);
    int localizaBinaria(int Contador, int codigobusca);
    void ordenacaoBolha(int limite);
    void imprimirProdutos(int limite);
    
private:

};

#endif /* CPRODUTOS_H */

