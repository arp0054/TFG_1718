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
	Laser laser;
	int* le;
public:
	Interfaz();
	~Interfaz();
	int* getLecturas();
	void setLecturas();
	Laser getLaser();
	void setLaser();
};

#endif /* INTERFAZ_H_ */
