/**
 * Project Untitled
 */


#ifndef _LASER_H
#define _LASER_H

class Laser {
public: 
    Vector<Lectura> datos;
    
    /**
     * @param datos
     */
    void enviarLecturas(void datos);
};

#endif //_LASER_H