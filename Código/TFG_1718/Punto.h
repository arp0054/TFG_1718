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
	int coorX=0,coorY=0;
public:
	Punto();
	~Punto();
	void setPunto(int,int);
	int getPuntoX();
	int getPuntoY();
};

#endif /* PUNTO_H_ */
