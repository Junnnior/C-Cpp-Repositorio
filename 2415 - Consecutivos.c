/* 2415 - Consecutivos */
#include <stdio.h>

int main() {
    int vezes;
    scanf("%d", &vezes);
    
    int numLista[vezes], index, qtd =0, local = 0, maior = 0 ;
    
    // add value in vetor 
    for (index = 0 ; index<vezes; index ++ ) {
        scanf("%d", &numLista[index]);
    }
    
    // in vetor 
    for (index = 0 ; index<vezes; index ++ ) {
        
        if( numLista[index] == numLista[local]){
            qtd ++;
        
        } else {
            local = index;
            qtd = 1;
        }
        
        // maior numeors de repeticao
        if(qtd > maior) {
            maior = qtd;
        }
    }
    
    printf("%d\n", maior);  
    return 0;
}
