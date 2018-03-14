/**
 * Project Untitled
 */


#ifndef _PUNTO_H
#define _PUNTO_H

class Punto {
public: 
    
    void Coordenada();
    
    /**
     * @param valx
     * @param valy
     */
    void setPos(int valx, int valy);
    
    Vector<int> getPos();
private: 
    int coorX;
    int coorY;
};

#endif //_PUNTO_H