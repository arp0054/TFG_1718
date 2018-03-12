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
	Punto* entrada;
	Laser lasr;
	Procesador instance;
public:
	Procesador();
	~Procesador();
	Procesador getInstance();
	Punto* getEntrada();
	void setEntrada(Punto*);
	Laser* getEntrada();
	void setEntrada(Laser*);
	PuntoDetectado* creaObjetoDetect(Punto*);
};

#endif /* PROCESADOR_H_ */
