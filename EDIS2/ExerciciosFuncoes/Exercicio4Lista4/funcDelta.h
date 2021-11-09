#ifndef FUNCDELTA_H
#define FUNCDELTA_H

class funcDelta {
public:
    funcDelta();
    funcDelta(const funcDelta& orig);
    virtual ~funcDelta();
    
    int a, b, c, resultado;
    void lerDados();
    int calcResultado();
    
private:

};

#endif /* FUNCDELTA_H */

