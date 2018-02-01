/*
 * PuntoDetectado.h
 *
 *  Created on: 22 nov. 2017
 *      Author: alvarorui
 */

#ifndef PUNTODETECTADO_H_
#define PUNTODETECTADO_H_
#include "Punto.h"

class PuntoDetectado {
private:
	Punto coor[4]={};
public:
	PuntoDetectado();
	~PuntoDetectado();
	Punto* getPuntos();
	void setPuntos(Punto[4]);
};

#endif /* PUNTODETECTADO_H_ */
