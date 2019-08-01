/* URI Online Judge | 1160 - Crescimento Populacional */

#include<stdio.h>

// crescimento anual
double crescimentoAno(int populacao, double crescimento) {
    crescimento = crescimento / 100;
    populacao = populacao * crescimento;
  
    return populacao; 
}

int main(void) {
    double crescimetoA, crescimetoB;
    int cidadeA, cidadeB, casosTestes,i, ano = 1;

    scanf("%d", &casosTestes);
    for(i=0; i<casosTestes; i++) {

        scanf("%d %d %lf %lf", &cidadeA, &cidadeB, &crescimetoA, &crescimetoB);
        ano = 1; // inicia contagem de anos pra cadas caso

        while(1){

            // descobre crescimento a cada ano, converte para int
            int crescimentoAnoA =  crescimentoAno(cidadeA, crescimetoA);
            int crescimentoAnoB =  crescimentoAno(cidadeB, crescimetoB);

            // soma populacao com o crescimento do ano
            cidadeA += crescimentoAnoA;
            cidadeB += crescimentoAnoB;

            // se for maior que 100 anos
            if(ano > 100){
                printf("Mais de 1 seculo.\n");
                break;
            }

            // verifica se a populacao A é maior que a B
            if(cidadeA>cidadeB){
                printf("%d anos.\n",ano);
                break;
            } 
            ano ++;
        }
    }
    return 0;
}