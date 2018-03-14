/**
 * Project Untitled
 */


#ifndef _AREA_H
#define _AREA_H

class Area {
public: 
    Vector<Punto> limites;
    
    /**
     * @param lim
     * @param id
     * @param obj
     */
    void Area(Vector<Punto> lim, int id, boolean obj);
    
    int getId();
    
    /**
     * @param newId
     */
    void setId(int newId);
    
    void getObj();
    
    void setObj();
private: 
    int id;
    boolean obj;
};

#endif //_AREA_H