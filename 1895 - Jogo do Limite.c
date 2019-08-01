/* URI Online Judge | 1895 - Jogo do Limite */

#include<stdio.h>

int main(void) {
    int numCartas, cartaInicial, limite, i,
    cartaJogada, pontosAlice = 0, pontosBob = 0, ponto = 0;

    scanf("%d %d %d", &numCartas, &cartaInicial, &limite);

    for (i = 1; i < numCartas; i++) {
        scanf("%d", &cartaJogada);

        ponto = cartaJogada - cartaInicial;
        // se a carta jogada é menor que carta inical, subtracao inverca
        if(cartaInicial > cartaJogada){
            ponto = cartaInicial - cartaJogada;
        }

        // validacao de pontuacao, se estar no limite
        if(ponto <= limite){

            // destribuicao de pontos, jogada inical da Alice
            if(i%2 != 0){
                pontosAlice += ponto;
            } else {
                pontosBob += ponto;
            }

            // substitui a carta na mesa
            cartaInicial = cartaJogada;
        }
    }

    printf("%d %d\n", pontosAlice, pontosBob);
    return 0;
}