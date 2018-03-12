/*
 * PuntoDetectado.h
 *
 *  Created on: 22 nov. 2017
 *      Author: alvarorui
 */

#ifndef PUNTODETECTADO_H_
#define PUNTODETECTADO_H_
#include "Punto.h"
#include <math.h>

class PuntoDetectado {
private:
	Punto coor[2]={};
public:
	PuntoDetectado();
	~PuntoDetectado();
	Punto* getPuntos();
	void setPuntos(Punto[2]);
	double* traducir();
};

#endif /* PUNTODETECTADO_H_ */
