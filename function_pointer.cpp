#include<stdio.h>

void sum(int, int, int *);

int main(void){
	int iValueA;
	int iValueB;
	int iResult;
	
	printf("Enter the values: ");
	
	scanf("%d %d", &iValueA, &iValueB);
	
	printf("Address of Result = %d\n", &iResult);
	
	sum(iValueA, iValueB, &iResult);
	
	printf("Sum: %d\n", iResult);
	
	return 0;
} 

void sum(int piValueA, int piValueB, int * piResult)
{
	printf("Address of Pointer Result = %d\n", piResult);
	*piResult = piValueA + piValueB;
}





















