/*
 * TUI.h
 *
 *  Created on: 11 mar. 2018
 *      Author: alvarorui
 */

#ifndef TUI_H_
#define TUI_H_
#include "Area.h"
#include "PuntoDetectado.h"
#include "Procesador.h"

class TUI {
private:
	Area* areas;
	PuntoDetectado* detect;
	Procesador pro;
public:
	TUI();
	~TUI();
	Area* getAreas();
	void setAreas(Area*);
	PuntoDetectado* getDetectados();
	void setDetectados(PuntoDetectado*);
	void setProcesador(Procesador);
	Procesador getProcesador();
	bool* hayObjeto(Area*, Procesador);
};

#endif /* TUI_H_ */
