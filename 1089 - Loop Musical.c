/* URI Online Judge | 1089 - Loop Musical */

#include<stdio.h>

int main(void) {

    while(1){

        int i, qtdAmostras, qtdPicos = 0, indexDireita, indexEsquerda;
    
        scanf("%d", &qtdAmostras);

        // finaliza programa        
        if(qtdAmostras == 0) break;

        int amostras[qtdAmostras];

        // adc valores ao array
        for (i = 0; i < qtdAmostras; i++){
            scanf("%d", &amostras[i]);
        }

        // pecorre array busncando picos
        for(i = 0; i <qtdAmostras; i ++){

            indexEsquerda = i;
            indexDireita = i;

            // trada erro do index a esquerda da amostra
            if(indexEsquerda == 0 ){
                indexEsquerda = qtdAmostras ;

            // trada erro do index a direita da amostra
            } else if(indexDireita == qtdAmostras - 1){
                indexDireita =  -1;
            }

            // encontra menor pico
            if(amostras[i]<amostras[indexEsquerda-1] && amostras[i]<amostras[indexDireita+1] ){
                qtdPicos ++;

            // encontra maior pico
            } else if(amostras[i]>amostras[indexEsquerda-1] && amostras[i]>amostras[indexDireita+1] ){
                qtdPicos ++;
            }
        }

        printf("%d\n", qtdPicos);
    }

    return 0;
}