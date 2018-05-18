/*
 * Procesador.cpp
 *
 *  Created on: 12 mar. 2018
 *      Author: alvarorui
 */

#include "Procesador.h"
#include "Interfaz.cpp"
#include "Laser.h"

Procesador::Procesador() {
}

Procesador::~Procesador() {
}

Procesador Procesador::getInstance(){
	if (instance==NULL){
		instance=new Procesador();
	}
	return instance;
}

Punto* Procesador::getEntrada(){
	return entrada;
}

void Procesador::setEntrada(Punto* e){
	entrada=lasr.dividirDatos();
}

Laser Procesador::getLaser(){
	return lasr;
}

void Procesador::setLaser(Laser l){
	lasr=l;
}

PuntoDetectado* Procesador::creaObjetoDetect(Punto* p){
	return NULL;
}
