/* URI Online Judge | 1250 KiloMan */

#include <stdio.h>
 
int main(){
    int testes, numeroTiros, i, j, atingido;
    char c;

    // total de casos de testes
    scanf("%d",&testes);
    for(i = 0; i < testes; i++){

        // total de tiros disparados
        scanf("%d",&numeroTiros);
        atingido = 0;

        int tiro[numeroTiros];
        char pulo[numeroTiros+1];

        // lendo altura dos tiros 
        for(j = 0; j < numeroTiros; j++){
            scanf("%d",&tiro[j]);
        }

        // lendo pulos | S = parado J = pulando  
        scanf("%s%*c",&pulo);
        for(j = 0; j < numeroTiros; j++){

            // verifica se foi atingido parado
            if(pulo[j] == 'S'){
                if(tiro[j] < 3) atingido++;
            
            // verifica se foi atingido pulando
            } else {
                if(tiro[j] > 2) atingido++;
            }
        }
        printf("%d\n", atingido);
    }
    return 0;
}