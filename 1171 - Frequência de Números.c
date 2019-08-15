/* URI Online Judge | 1171 - Frequência de Números */

#include<stdio.h>

int main(void) {
    int qtdValores, i, j, valorUnicoAdd = 0, qtdUnicos = 0,
    n = 0, aux, qtdValorLista;
    scanf("%d", &qtdValores);

    int  listaValores[qtdValores], valoresUnicos[qtdValores];

    // adc valores a lista
    for(i = 0; i < qtdValores; i++) {
        scanf("%d", &listaValores[i]);
    }

    // excluir valores repetidos 
    int tam = sizeof(listaValores) / sizeof(int);
    for( i = 0; i < tam; i++) {
        for( j = 0; j < n; j++ ) {
            if( listaValores[i] == valoresUnicos[j] )
                break;
        }
        if( j == n ){
            valoresUnicos[n] = listaValores[i];
            n++;
        }
    }

    // Algoritmo de ordenação Bubblesort:
    for (i = 0; i < n; i++){
        for (j = 0; j < n; j++){
            if (valoresUnicos[i] < valoresUnicos[j]) {
                aux = valoresUnicos[i];
                valoresUnicos[i] = valoresUnicos[j];
                valoresUnicos[j] = aux;
            }
        }
    }
    // saida 
    for(i = 0; i<n; i++){
        qtdValorLista = 0;
        for(j = 0; j < qtdValores; j++){
            if(valoresUnicos[i] == listaValores[j]){
                qtdValorLista ++;
            }
        }
        printf("%d aparece %d vez(es)\n", valoresUnicos[i], qtdValorLista);
    }

    return 0;
}
