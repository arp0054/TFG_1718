/*
 * Punto.cpp
 *
 *  Created on: 22 nov. 2017
 *      Author: alvarorui
 */

#include <stdio.h>
#include <stdlib.h>
#include "Punto.h"
#include <math.h>
using namespace std;


Punto::Punto(){

}

Punto::~Punto(){

}

void Punto::setPunto(){
	double cX;
	double cY;
	cout<<"Introduce coordenada X: "<<endl;
	cin>>cX;
	cout<<"Introduce coordenada Y: "<<endl;
	cin>>cY;
	coorX= cX;
	coorY= cY;
}

double Punto::getPuntoX(){
	return coorX;
}

double Punto::getPuntoY(){
	return coorY;
}

double* Punto::traducir(double cX,double cY){
	double coorpol[2];
	coorpol[0]= sqrt(pow(cX,2)+pow(cY,2));
	coorpol[1]= atan(cY/cX);
	return coorpol;
}
