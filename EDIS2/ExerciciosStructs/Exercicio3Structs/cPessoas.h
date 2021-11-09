#ifndef CPESSOAS_H
#define CPESSOAS_H

class cPessoas {
public:
    
    struct pessoas{
        char nome[40];
        char sexo;
        float altura, peso;
        int cpf, matricula;
    }vetPessoas[3];
            
    cPessoas();
    cPessoas(const cPessoas& orig);
    virtual ~cPessoas();
    
    void lerDados();
    void localizaSequencial(int limite, int matriculabusca);
    int localizaBinaria(int Contador, int matriculabusca);
    void ordenacaoBolha(int limite);
    void imprimirPessoas(int limite);
    
private:

};

#endif /* CPESSOAS_H */

