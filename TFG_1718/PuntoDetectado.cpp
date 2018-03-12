/*
 * PuntoDetectado.cpp
 *
 *  Created on: 22 nov. 2017
 *      Author: alvarorui
 */

#include "PuntoDetectado.h"
#include "Punto.h"
#include "math.h"

PuntoDetectado::PuntoDetectado() {

}

PuntoDetectado::~PuntoDetectado() {

}

Punto* PuntoDetectado::getPuntos(){
	return coor;
}

void PuntoDetectado::setPuntos(Punto _coor[2]){
	for (int i=0; i<coor;i++){
		coor[i] = _coor[i];
	}
}

double* PuntoDetectado:: traducir(){
	double trad[2];
	for(int i=0;i<coor;i++){
		trad[0]= sqrt(pow(coor[i].getPuntoX(),2)+pow(coor[i].getPuntoY(),2));
		trad[1]= atan(coor[i].getPuntoY()/coor[i].getPuntoX());
	}
	return trad;
}
