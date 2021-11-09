#ifndef VOLUMEESFERA_H
#define VOLUMEESFERA_H

class volumeEsfera {
public:
    volumeEsfera();
    volumeEsfera(const volumeEsfera& orig);
    virtual ~volumeEsfera();
    
    float volume, raio, pi = 3.14;
    void lerDados();
    float calcVolume();
    
private:

};

#endif /* VOLUMEESFERA_H */

