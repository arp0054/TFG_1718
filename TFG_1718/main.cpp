#include <stdio.h>
#include <stdlib.h>
#include <Procesador.h>
#include <PuntoDetectado.h>
#include <Laser.h>
#include <Punto.h>
#include <Area.h>
#include <iostream>

using namespace std;

Area* setAreas(int n){
	Area ars[n];
	for(int i =0;i<n;i++){
		Punto lim[4];
		ars[i].setLimites(lim);
	}
	return ars;
}

PuntoDetectado* setDetectados(Procesador pro){
	Laser l;
	return pro.creaObjetoDetect(l.dividirDatos());
}

bool hayObjeto(Area a, PuntoDetectado pt){
	int minX=9999999999;
	int minY=9999999999;
	int maxX=-9999999999;
	int maxY=-9999999999;
	bool retorno=false;
	for(int i=0;i<sizeof(a.limites);i++){
		if(a.limites[i].coorX<minX){
			minX=a.limites[i].coorX;
		}
		if(a.limites[i].coorX>maxX){
			maxX=a.limites[i].coorX;
		}
		if(a.limites[i].coorY<minY){
			minY=a.limites[i].coorY;
		}
		if(a.limites[i].coorY>maxY){
			maxY=a.limites[i].coorY;
		}
	}

	if(pt.coor[0]>minX and pt.coor[0]<maxX and pt.coor[1]>minY and pt.coor[1]<maxY){
		retorno=true;
	}

	return retorno;
}

int main (){
	int nar;
	Punto aux = new Punto();
	cout<<"Indique número de areas: "<<endl;
	cin<<nar;

	Area areas[nar]=setAreas(nar);
	Procesador pro=pro.getInstance();
	PuntoDetectado pds[nar]=pro.creaObjetoDetect(pro.getEntrada());
	cout<<"Hello world"<<endl;
	return 0;
}
