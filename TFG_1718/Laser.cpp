/*
 * Laser.cpp
 *
 *  Created on: 12 mar. 2018
 *      Author: Alvaro Ruifernández Palacios
 */

#include "Laser.h"
#include "Interfaz.cpp"

Laser::Laser() {
}

Laser::~Laser() {
}

Interfaz Laser::getInterfaz(){
	return inter;
}

void Laser::setInterfaz(Interfaz _inter){
	inter=_inter;
}

Punto* Laser::dividirDatos(int* datos){
	return entrada;
}

int* Laser::getDatos(){
	return datos;
}

void Laser::setDatos(int* dat){

}
