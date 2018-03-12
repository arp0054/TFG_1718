/*
 * Interfaz.h
 *
 *  Created on: 12 mar. 2018
 *      Author: alvarorui
 */

#ifndef INTERFAZ_H_
#define INTERFAZ_H_
#include "Laser.h"

class Interfaz {
private:
	Laser* lasers;
	int* le;
public:
	Interfaz();
	~Interfaz();
	int* getLecturas();
	void setLecturas(int*);
	Laser* getLaser();
	void setLaser(Laser*);
};

#endif /* INTERFAZ_H_ */
