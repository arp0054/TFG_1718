/*
 * Punto.h
 *
 *  Created on: 22 nov. 2017
 *      Author: alvarorui
 */

#ifndef PUNTO_H_
#define PUNTO_H_

class Punto {
private:
	double coorX=0,coorY=0;
public:
	Punto();
	~Punto();
	void setCoors(double,double);
	double getCoorX();
	double getCoorY();
	double* traducir(double,double);
};

#endif /* PUNTO_H_ */
