/*
 * Punto.cpp
 *
 *  Created on: 22 nov. 2017
 *      Author: alvarorui
 */

#include "Punto.h"


Punto::Punto(){

}

Punto::~Punto(){

}

void Punto::setPunto(int cX,int cY){
	coorX= cX;
	coorY= cY;
}

int Punto::getPuntoX(){
	return coorX;
}

int Punto::getPuntoY(){
	return coorY;
}

