/*
 * Interfaz.cpp
 *
 *  Created on: 12 mar. 2018
 *      Author: alvarorui
 */

#include "Interfaz.h"
#include "Laser.cpp"

Interfaz::Interfaz() {
	lasers=new Laser[]();
	le= NULL;

}

Interfaz::~Interfaz() {
	// TODO Auto-generated destructor stub
}

