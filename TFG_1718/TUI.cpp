/*
 * TUI.cpp
 *
 *  Created on: 11 mar. 2018
 *      Author: alvarorui
 */

#include "TUI.h"
#include "Procesador.cpp"

TUI::TUI() {
	areas=NULL;
	pro=new Procesador();
	detect=NULL;

}

TUI::~TUI() {
	// TODO Auto-generated destructor stub
}

