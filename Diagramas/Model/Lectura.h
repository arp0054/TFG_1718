/**
 * Project Untitled
 */


#ifndef _LECTURA_H
#define _LECTURA_H

class Lectura {
public: 
    
    void Lectura();
    
    Vector<int> getLectura();
    
    /**
     * @param int _distancia
     * @param int angulo
     */
    void setLectura(void int _distancia, void int angulo);
private: 
    int distancia;
    int angulo;
};

#endif //_LECTURA_H