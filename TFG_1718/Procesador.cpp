/*
 * Procesador.cpp
 *
 *  Created on: 12 mar. 2018
 *      Author: alvarorui
 */

#include "Procesador.h"

Procesador::Procesador() {
	entrada=new Punto[]();
	lasr=new Laser();
	instance=NULL;
}

Procesador::~Procesador() {
}

