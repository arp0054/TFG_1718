/*
 * Punto.cpp
 *
 *  Created on: 22 nov. 2017
 *      Author: alvarorui
 */

#include "Punto.h"
#include <math.h>
#include "iostream"

using namespace std;


Punto::Punto(){

}

Punto::~Punto(){

}

void Punto::setCoors(){
	double x;
	double y;
	cout<<"Introduce coordenada x: "<<endl;
	cin>>x;
	cout<<"Introduce coordenada y: "<<endl;
	cin>>y;
	coorX= x;
	coorY= y;
}

double Punto::getCoorX(){
	return coorX;
}

double Punto::getCoorY(){
	return coorY;
}

double* Punto::traducir(double cX,double cY){
	double coorpol[2];
	coorpol[0]= sqrt(pow(cX,2)+pow(cY,2));
	coorpol[1]= atan(cY/cX);
	return coorpol;
}
