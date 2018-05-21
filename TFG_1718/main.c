#include <stdio.h>
#include <stdlib.h>
#include <Procesador.cpp>
#include <Area.cpp>
#include <Punto.cpp>

Area* setAreas(int n){
	Area areas[n];
	for(int i =0;i<n;i++){
		Punto lim[4];
		for(int j=0;j<4;j++){
			double x;
			double y;
			printf("Introduce las coordenadas de limite %i de 4: (formato x,y)", j+1);
			scanf("%d,%d", x,y);
			lim[j].setPunto(x,y);
		}
		areas[i].setLimites(lim);
	}
	return areas;
}

int main (void){
	int nar;
	printf("Indique número de areas: ");
	scanf("%i",nar);
	Area areas[nar]=setAreas(nar);
	printf("Hello world");
	return 0;
}
