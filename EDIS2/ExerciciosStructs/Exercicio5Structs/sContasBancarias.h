#ifndef SCONTASBANCARIAS_H
#define SCONTASBANCARIAS_H

class sContasBancarias {
public:
    
    struct Clientes{
        char nome[40];
        float depositoinicial;
        int cpf;
    }vetClientes[3];
    
    sContasBancarias();
    sContasBancarias(const sContasBancarias& orig);
    virtual ~sContasBancarias();
    
    void lerDados();
    void localizaSequencial(int limite, int cpfbusca);
    int localizaBinaria(int Contador, int cpfbusca);
    void ordenacaoBolha(int limite);
    void imprimirClientes(int limite);
    
private:

};

#endif /* SCONTASBANCARIAS_H */

