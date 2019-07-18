#include<stdio.h>

struct DADO
{
	char sNome[40];
	int iIdade;
};

int main(void)
{
	// instanciando estrutura DADO
	struct DADO sDados[2];
	
	for(int i = 0; i < 2; i++) {
		printf("\nEntre com o nome -> ");
		scanf("%s", &sDados[i].sNome);
		
		printf("\nEntre com a idade -> ");
		scanf("%d", &sDados[i].iIdade);
	}
	
	for(int i = 0; i < 2; i ++){
		printf("\n%s tem %d anos.", sDados[i].sNome, sDados[i].iIdade);
	}
	
	return 0;
}
