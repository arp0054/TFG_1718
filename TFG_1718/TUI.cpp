/*
 * TUI.cpp
 *
 *  Created on: 11 mar. 2018
 *      Author: alvarorui
 */

#include "TUI.h"
#include "Area.cpp"
#include "PuntoDetectado.cpp"
#include "Procesador.cpp"

TUI::TUI(Area* ar) {
	areas=ar;
	detect= new PuntoDetectado[sizeof(areas)]();
	pro=new Procesador();
}

TUI::~TUI() {
}

Area* TUI:: getAreas(){
	return areas;
}

void TUI::setAreas(Area* ar){
	for(int i=0;i<sizeof(areas);i++){
		areas[i]=ar[i];
	}
}

PuntoDetectado* TUI::getDetectados(){
	return detect;
}

void TUI::setDetectados(PuntoDetectado* ptos){
	detect=ptos;
}

void TUI::setProcesador(Procesador p){
	pro=p;
}
Procesador TUI::getProcesador(){
	return pro;
}
bool* TUI::hayObjeto(Area* as, Procesador pr){

}
