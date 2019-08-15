/* URI Online Judge | 1238 - Combinador */

#include<stdio.h>
#include<string.h>

int main(void) {
    int qtdTestes, i, j, primeiraEntradaSize, segundaEntradaSize, cont;
    char primeiraEntrada[52], segundaEntrada[52], saida[104];

    scanf("%d", &qtdTestes);

    for(i = 0; i <qtdTestes; i++){
        scanf("%s %s", primeiraEntrada, segundaEntrada);

        // tamanho das entradas
        primeiraEntradaSize = strlen(primeiraEntrada);
        segundaEntradaSize = strlen(segundaEntrada);

        cont = 0;
        while (cont < primeiraEntradaSize && cont < segundaEntradaSize){
            printf("%c%c", primeiraEntrada[cont], segundaEntrada[cont]);
            cont ++;
        }

        // completa primeira entrada, caso sobre valores
        if (cont < primeiraEntradaSize){
            for(j = cont; j < primeiraEntradaSize; j ++){
                printf("%c", primeiraEntrada[j]);
            }
        }

        // completa segunda entrada, caso sobre valores
        if (cont < segundaEntradaSize){
            for(j = cont; j < segundaEntradaSize; j ++){
                printf("%c", segundaEntrada[j]);
            }
        }

        printf("\n");
        
    }
    
    return 0;
}
