#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int sort, aleatorios[20], i, maior, menor;

    for(i=0; i<20; i++) {
        sort = rand()%20;
        aleatorios[i] = sort;
        printf("%d", aleatorios[i]);
        if(i<19) {
            printf(", ");
        }
    }
    maior = aleatorios[0];
    menor = aleatorios[0];
    for(i=0; i<20; i++) {
        if(maior<aleatorios[i]) {
            maior = aleatorios[i];
        }
        else if(menor>aleatorios[i]) {
            menor = aleatorios[i];
        }
    }
    for(i=0; i<20; i++) {
        if(maior==aleatorios[i]) {
            printf("\n%d é o maior e possui o indice [%d]\n", maior, i);
        }
        if(menor==aleatorios[i]) {
            printf("%d é o menor e possui indice [%d]\n", menor, i);
        }
    }
    return 0;
}