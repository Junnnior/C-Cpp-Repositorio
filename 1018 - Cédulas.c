/*	URI Online Judge | 1018 - Cédulas */ 
	
#include <stdio.h>

int main(void)
{
	int valor,index, cedulas[7] = {100,50,20,10,5,2,1};
	
	scanf("%d", &valor);	
	printf("%d\n", valor);
	
	for(index = 0; index<7; index++){
		printf("%d nota(s) de R$ %d,00\n",(valor/cedulas[index]),cedulas[index]);
		valor = valor % cedulas[index];
	}
	
	return 0;
}