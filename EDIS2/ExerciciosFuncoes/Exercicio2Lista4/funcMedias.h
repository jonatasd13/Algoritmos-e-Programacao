#ifndef FUNCMEDIAS_H
#define FUNCMEDIAS_H

class funcMedias {
public:
    funcMedias();
    funcMedias(const funcMedias& orig);
    virtual ~funcMedias();
    
    float nota1, nota2, nota3;
    void lerDados();
    float calcMedia();
    
private:

};

#endif /* FUNCMEDIAS_H */

