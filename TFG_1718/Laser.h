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
#include <Urg_driver.h>
#include <Connection_information.h>
#include <math_utilities.h>
#include <iostream>

class Laser {
private:
	int* datos=NULL;
	Interfaz inter=NULL;
	Punto* entrada=NULL;
public:
	Laser();
	~Laser();
	Interfaz getInterfaz();
	void setInterfaz(Interfaz);
	Punto* dividirDatos();
	int* getDatos();
	void setDatos(int*);
};

