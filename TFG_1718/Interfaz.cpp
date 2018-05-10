/*
 * Interfaz.cpp
 *
 *  Created on: 12 mar. 2018
 *      Author: alvarorui
 */

#include "Interfaz.h"
#include "Laser.cpp"

Interfaz::Interfaz() {
}

Interfaz::~Interfaz() {
}

int* Interfaz::getLecturas(){
	return le;
}

void Interfaz::setLecturas(){
	le= laser.getDatos();
}

Laser Interfaz::getLaser(){
	return laser;
}

void Interfaz::setLaser(){

}
