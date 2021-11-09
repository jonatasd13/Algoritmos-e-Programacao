#ifndef CALCTRIANGULOS_H
#define CALCTRIANGULOS_H


class calcTriangulos {
public:
    calcTriangulos();
    calcTriangulos(const calcTriangulos& orig);
    virtual ~calcTriangulos();
    
    float X, Y, Z;
    void lerDados();
    char identificaTriangulo();
    
private:

};

#endif /* CALCTRIANGULOS_H */

