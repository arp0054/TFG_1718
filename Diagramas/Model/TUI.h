/**
 * Project Untitled
 */


#ifndef _TUI_H
#define _TUI_H

class TUI {
public: 
    Vector<Area> areas;
    Vector<ObjetoDetectado> detect;
    
    void TUI();
    
    /**
     * @param area
     */
    void IntroducirDatos(Area area);
    
    /**
     * @param ob
     */
    Vector<ObjetoDetectado> CreaObjetosDetect(Vector<Punto> ob);
    
    /**
     * @param areas
     * @param obs
     */
    Vector<boolean> hayObjeto(Vector<Area> areas, Vector<ObjetoDetectado> obs);
    
    /**
     * @param areas
     */
    void enviarAreas(Vector<Area> areas);
};

#endif //_TUI_H