#include <stdio.h>

int main() {
    float notas[5], media, soma=0;
    int i, cont=0;
    for(i=0; i<5; i++) {
        printf("Insira a nota do %dº aluno: ", i+1);
        scanf("%f", &notas[i]);

        soma+=notas[i];
    }
    media=(float)soma/i+1;
    printf("A média da turma foi de %f pontos\n", media);
    for(i=0; i<5; i++) {
        if(notas[i]>media){
            cont++;
        }
    }
    printf("%d alunos com nota acima da média!", cont);
    return 0;
}