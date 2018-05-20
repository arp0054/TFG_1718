/*
 * Procesador.h
 *
 *  Created on: 12 mar. 2018
 *      Author: alvarorui
 */

#ifndef PROCESADOR_H_
#define PROCESADOR_H_
#include "Punto.h"
#include "Laser.h"
#include "PuntoDetectado.h"

class Procesador {
private:
	Punto* entrada=new Punto[]();
	Laser lasr=new Laser();
	Procesador instance=NULL;
	Procesador();
	~Procesador();
public:
	Procesador getInstance();
	Punto* getEntrada();
	void setEntrada(Punto*);
	Laser getLaser();
	void setLaser(Laser);
	PuntoDetectado* creaObjetoDetect(Punto*);
};

#endif /* PROCESADOR_H_ */
