#ifndef CALCMEDIAPOND_H
#define CALCMEDIAPOND_H

class calcMediaPond {
public:
    calcMediaPond();
    calcMediaPond(const calcMediaPond& orig);
    virtual ~calcMediaPond();
    
    float nota1, nota2, nota3, mediap;
    void lerDados();
    float calcularMedia();
    
private:

};

#endif /* CALCMEDIAPOND_H */

