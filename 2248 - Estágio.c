/* URI Online Judge | 2248 - Estágio */

#include<stdio.h>

int main(void) {

    int qtdTestes, aluno, matricula, nota, i, turma = 1;

    while(1){

        scanf("%d", &qtdTestes);
        if(qtdTestes == 0) break;

        int maioresNotasAlunos[1002], qtdMaioresAlunos = 0, inicioAlunos = 0, 
        maiorNota = 0, indexAluno = 0;
        for (i = 0; i < qtdTestes; i++){

            scanf("%d %d", &matricula, &nota);

            // encontra a maior nota
            if(nota >= maiorNota) {

                // mais de um aluno com maiores notas iguais
                if(nota == maiorNota || qtdMaioresAlunos == 0){
                    maioresNotasAlunos[indexAluno] = matricula;
                    qtdMaioresAlunos ++;

                // apenas um aluno com maior nota
                } else {
                    maioresNotasAlunos[indexAluno] = matricula;

                    // inicio da contagem de novos alunos
                    inicioAlunos = indexAluno;

                    // fim dos novos alunos no array
                    qtdMaioresAlunos = inicioAlunos + 1;
                }

                // atualiza maior nota
                maiorNota = nota;

                // posicao do aluno no array
                indexAluno ++;
            } 
        }

        printf("Turma %d\n", turma);
        for(i = inicioAlunos; i < qtdMaioresAlunos; i ++){
 
            // quebra linha caso seja o ultimo valor do array
            (i == qtdMaioresAlunos-1) ? printf("%d \n", maioresNotasAlunos[i]) : printf("%d ", maioresNotasAlunos[i]);
        }
        printf("\n");
        turma++;
    }

    return 0;
}