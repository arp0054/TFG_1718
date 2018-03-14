/**
 * Project Untitled
 */


#ifndef _PROCESADOR_H
#define _PROCESADOR_H

class Procesador {
public: 
    Lectura entrada;
    Vector<Area> areas;
    Interfaz interfaz;
    
    /**
     * @param _areas
     */
    void Procesador(Vector<Area> _areas);
    
    /**
     * @param entrada
     */
    Vector<Punto> dividirLecturas(void entrada);
    
    /**
     * @param area
     */
    void transferirAreas(Vector<Area> area);
private: 
    
    Interfaz detectarInterfaz();
};

#endif //_PROCESADOR_H