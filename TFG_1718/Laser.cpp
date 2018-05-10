/*
 * Laser.cpp
 *
 *  Created on: 12 mar. 2018
 *      Author: alvarorui
 */

#include "Laser.h"
#include "Interfaz.cpp"

Laser::Laser() {
}

Laser::~Laser() {
}

void Laser::setInterfaz(Interfaz _inter){
	inter=_inter;
}

Punto* Laser::dividirDatos(int*){
	return entrada;
}
int* Laser::getDatos(){
	return datos;
}
void Laser::setDatos(int*){

}
