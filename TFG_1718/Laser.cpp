/*
 * Laser.cpp
 *
 *  Created on: 12 mar. 2018
 *      Author: alvarorui
 */

#include "Laser.h"
#include "Interfaz.cpp"

Laser::Laser() {
	datos=NULL;
	inter = new Interfaz();
	entrada=NULL;

}

Laser::~Laser() {
}

void Laser::setInterfaz(Interfaz inter){
}

Punto* Laser::dividirDatos(int*){
	return entrada;
}
int* Laser::getDatos(){
	return datos;
}
void Laser::setDatos(int*){

}
