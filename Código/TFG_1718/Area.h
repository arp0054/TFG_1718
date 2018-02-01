/*
 * Area.h
 *
 *  Created on: 22 nov. 2017
 *      Author: alvarorui
 */

#ifndef AREA_H_
#define AREA_H_
#include "Punto.h"


class Area {
private:
	int id=0;
	bool obj=false;
public:
	Punto extremos[4];
	int getId();
	void setId(int);
	bool getObj();
	void setObj(bool);
	Area(Punto[4]);
	~Area();
};

#endif /* AREA_H_ */
