#include<stdio.h>

int main(void) {
    int primeiraEntrada, valor, proximo = 0, saida = 0;
    
    scanf("%d", &primeiraEntrada);
    while(scanf("%d", &valor) != EOF) { 

        if(valor<primeiraEntrada && proximo == 0){
            proximo = primeiraEntrada + 1;
            saida = 1;
        }
        primeiraEntrada = valor;
    }
    
    (saida == 1) ? printf("%d\n", proximo) : printf("%d\n", primeiraEntrada + 1); 

    return 0;
}