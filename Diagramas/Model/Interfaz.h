/**
 * Project Untitled
 */


#ifndef _INTERFAZ_H
#define _INTERFAZ_H

class Interfaz {
public: 
    Vector<Laser> laser;
    Vector<Area> ar;
    
    void Interfaz();
    
    Vector<Area> transferirLecturas();
    
    /**
     * @param Laser[*]
     */
    void recibirLecturas(void Laser[*]);
};

#endif //_INTERFAZ_H