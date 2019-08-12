/* 1041 - Coordenadas de um Ponto */

#include <stdio.h>

int main(){

    double coordX, coordY;

    scanf("%lf %lf", &coordX, &coordY);
	
	if(coordX == 0 && coordY == 0) {
		printf("Origem\n");
	
	} else if(coordX == 0 && coordY != 0) {
		printf("Eixo Y\n");
	
	} else if(coordX != 0 && coordY == 0){
		printf("Eixo X\n");
	
	} else if(coordX > 0) {
		(coordY > 0) ? printf("Q1\n") : printf("Q4\n");
	
	} else if(coordY > 0) {
		printf("Q2\n");
	
	} else {
		printf("Q3\n");
	}
	
    return 0;
}