/* URI Online Judge | 2062 - OBI URI */

#include<stdio.h>
#include<string.h>

int main(void) {
    int qtdTestes, i, tamanhoEntrada;
    char entrada[10000];

    scanf("%d", &qtdTestes);
    for(i = 0; i <qtdTestes; i++){
        scanf("%s", entrada);

        // tamanho das entradas
        tamanhoEntrada = strlen(entrada);
        if(tamanhoEntrada == 3){

            if(entrada[0] == 'U' && entrada[1] == 'R'){
                entrada[2] = 'I';
           
            } else if(entrada[0] == 'O' && entrada[1] == 'B'){
                entrada[2] = 'I';
            } 
        }
        
        // verifica se eh a ultima entrada para quebrar a linha
        (i == qtdTestes-1)? printf("%s\n", entrada) : printf("%s ", entrada);
    }
    return 0;
}
