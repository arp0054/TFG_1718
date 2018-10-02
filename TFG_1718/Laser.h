/*
 * Laser.h
 *
 *  Created on: 12 mar. 2018
 *      Author: alvarorui
 */

#ifndef LASER_H_
#define LASER_H_
#include <stdio.h>
#include <Interfaz.h>
#include "Punto.h"
#include <iostream>
#include <string>
#include <sstream>
#include <errno.h>
#include <stdlib.h>


using namespace std;

class Laser {
private:
	int* datos=NULL;
	Interfaz inter=NULL;
	Punto* entrada=NULL;
	FILE f=NULL;

public:
	Laser();
	~Laser();
//	Interfaz getInterfaz();
//	void setInterfaz(Interfaz);
	Punto* setDatos();
	int* getDatos();
	void conectar();
};

#endif /* LASER_H_ */
