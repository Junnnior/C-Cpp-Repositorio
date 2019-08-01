/*  URI Online Judge | 1157 - Divisores I */ 

#include <stdio.h>

int main(void)
{
    int horaInicial, minutoInicial, horaFinal, 
    minutoFinal, inicial, final, duracao;
    
    scanf("%d %d %d %d", &horaInicial, &minutoInicial, &horaFinal, &minutoFinal);   
    
    // hora * 60 = transforma hora em segundos
    inicial = horaInicial * 60 + minutoInicial;
    final   = horaFinal * 60 + minutoFinal;
    duracao = 0;
    
    if(horaInicial <= horaFinal) {
        duracao = final - inicial;
        if(duracao == 0) {
            printf("O JOGO DUROU 24 HORA(S) E %d MINUTO(S)\n",resto(duracao));
        
        } else {
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",duracaoHora(duracao),resto(duracao));
        }
        
    } else {
        duracao = 1440 - inicial + final; // 1440 = minutos em um dia
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",duracaoHora(duracao),resto(duracao));
    }
    return 0;
}

int duracaoHora(int duracao){
    return ((duracao - resto(duracao)) / 60);
}

// resto da divisao por 60
int resto(int duracao) {
    return duracao % 60;
}