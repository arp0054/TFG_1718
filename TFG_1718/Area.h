/*
 * Area.h
 *
 *  Created on: 22 nov. 2017
 *      Author: alvarorui
 */

#ifndef AREA_H_
#define AREA_H_
#include <Punto.h>


class Area {
private:
	Punto limites[4];
	int id=0;
	int seq_id=0;
	bool obj=false;
public:
	Area();
	~Area();
	int getId();
	void setId();
	bool getObj();
	void setObj(bool);
	Punto* getLimites();
	void setLimites(Punto[4]);

};

#endif /* AREA_H_ */
