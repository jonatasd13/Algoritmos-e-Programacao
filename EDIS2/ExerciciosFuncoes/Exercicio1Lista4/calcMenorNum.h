#ifndef CALCMENORNUM_H
#define CALCMENORNUM_H

class calcMenorNum {
public:
    calcMenorNum();
    calcMenorNum(const calcMenorNum& orig);
    virtual ~calcMenorNum();
    
    int n1, n2, resultado;
    void lerDados();
    int calcResultado();
    
private:

};

#endif /* CALCMENORNUM_H */

