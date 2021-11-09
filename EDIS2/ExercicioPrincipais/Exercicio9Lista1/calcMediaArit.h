#ifndef CALCMEDIAARIT_H
#define CALCMEDIAARIT_H

class calcMediaArit {
public:
    calcMediaArit();
    calcMediaArit(const calcMediaArit& orig);
    virtual ~calcMediaArit();
    
    float nota1, nota2, nota3, mediaa;
    void lerDados();
    float calcularMedia();
    char situacaoAluno();
    
private:

};

#endif /* CALCMEDIAPOND_H */

