/* URI Online Judge | 1118 - Várias Notas Com Validação */

#include<stdio.h>

int main(void) {
    float notaSomada, nota, cont = 0;
    int novo = 0, parar = 0;

    while(parar == 0){
        scanf("%f", &nota);

        if(nota >= 0 && nota <= 10){
            notaSomada += nota;
            cont ++;

            if (cont == 2) {
                printf("media = %.2f\n", (notaSomada/2));
                cont = 0;
                notaSomada = 0;

                while(1) {
                    printf("novo calculo (1-sim 2-nao)\n");
                    scanf("%d", &novo);

                    // finaliza operacao
                    if(novo == 2) {
                        parar = 1;
                        break;
                    
                    // continua operacao
                    } else if(novo == 1){
                        parar = 0;
                        break;
                    } 
                }
            } 

        } else {
            printf("nota invalida\n");
        }
    }

    return 0;
}
