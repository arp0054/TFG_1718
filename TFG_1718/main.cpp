#include <stdio.h>
//#include <stdlib.h>
#include "Procesador.h"
#include "PuntoDetectado.h"
#include "Laser.h"

#include "Punto.h"
#include "Area.h"

Area* setAreas(int n){
	Area ars[n];
	for(int i =0;i<n;i++){
		Punto lim[4];
		for(int j=0;j<4;j++){
			lim[j].setCoors();
		}
		ars[i].setLimites(lim);
	}
	return ars;
}

PuntoDetectado* setDetectados(Procesador pro){
	Laser l;
	return pro.creaObjetoDetect(l.dividirDatos());
}

bool hayObjeto(Area a, PuntoDetectado* pts){
	return 1;
}

int main (void){
	int nar;
	Punto aux = new Punto();
	printf("Indique número de areas: ");
	scanf("%i",nar);

	//Area areas[nar]=setAreas(nar);
//	Procesador pro=pro.getInstance();
	printf("Hello world");
	return 0;
}
