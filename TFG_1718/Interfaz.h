/*
 * Interfaz.h
 *
 *  Created on: 12 mar. 2018
 *      Author: alvarorui
 */

#ifndef INTERFAZ_H_
#define INTERFAZ_H_
#include <Laser.h>

#pragma comment (lib,"ws2_32.lib")

class Interfaz {
private:
	Laser laser= new Laser();
	int* le=NULL;
public:
	Interfaz();
	~Interfaz();
	int* getLecturas();
	void setLecturas();
	Laser getLaser();
	void setLaser();
};

#endif /* INTERFAZ_H_ */
