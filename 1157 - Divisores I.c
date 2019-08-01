/*	URI Online Judge | 1157 - Divisores I */ 

#include <stdio.h>

int main(void)
{
	int valor,index;
	
	scanf("%d", &valor);	
	
	for(index = 1; index<=valor; index++){
		if(valor % index == 0){
			printf("%d\n", index);
		}
	}
	
	return 0;
}
