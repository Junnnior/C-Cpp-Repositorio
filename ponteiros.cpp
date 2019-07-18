#include <stdio.h>

int main(void) {
	
	int *pValue; // pointer of value
	
	int valueInput = 123456;
	
	pValue = &valueInput; // get address of memory variable
	
	printf("Address: %d\n", pValue);
	printf("Value: %d\n\n",valueInput);
	
	*pValue = 54321;
	
	printf("Address: %d\n", pValue);
	printf("Altered value: %d\n",valueInput);
	return 0;
}
