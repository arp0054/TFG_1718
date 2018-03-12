/*
 * Laser.h
 *
 *  Created on: 12 mar. 2018
 *      Author: alvarorui
 */

#ifndef LASER_H_
#define LASER_H_
#include <stdio.h>
#include "Interfaz.h"
#include "Punto.h"

class Laser {
private:
	int* datos;
	Interfaz inter;
	Punto* entrada;
	void setInterfaz(Interfaz);
public:
	Laser();
	~Laser();
	Punto* dividirDatos(int*);
	int* getDatos();
	void setDatos(int*);
};

#endif /* LASER_H_ */
