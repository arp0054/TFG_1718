/*
 * PuntoDetectado.cpp
 *
 *  Created on: 22 nov. 2017
 *      Author: alvarorui
 */

#include "PuntoDetectado.h"
#include "Punto.h"

PuntoDetectado::PuntoDetectado() {

}

PuntoDetectado::~PuntoDetectado() {

}

Punto* PuntoDetectado::getPuntos(){
	return coor;
}

void PuntoDetectado::setPuntos(Punto _coor[4]){
	for (int i=0; i<coor;i++){
		coor[i] = _coor[i];
	}
}
