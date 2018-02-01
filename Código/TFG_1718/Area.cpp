/*
 * Area.cpp
 *
 *  Created on: 22 nov. 2017
 *      Author: alvarorui
 */

#include "Area.h"
#include "Punto.cpp"

Area::Area(Punto _extremos[4]) {
	for(int i=0; i<4; i++){
		extremos[i]= _extremos[i];
	}
}

Area::~Area() {

}

int Area::getId(){
	return id;
}

void Area:: setId(int newId){
	id=newId;
}

bool Area:: getObj(){
	return obj;
}

void Area:: setObj(bool option){
	obj=option;
}
