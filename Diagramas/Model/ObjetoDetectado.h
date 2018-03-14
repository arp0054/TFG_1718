/**
 * Project Untitled
 */


#ifndef _OBJETODETECTADO_H
#define _OBJETODETECTADO_H

class ObjetoDetectado {
public: 
    
    /**
     * @param Punto[*]
     */
    void ObjetoDetectado(void Punto[*]);
    
    coor getPuntos();
    
    /**
     * @param Punto
     */
    void setPunto(void Punto);
private: 
    Vector<Punto> coor;
};

#endif //_OBJETODETECTADO_H