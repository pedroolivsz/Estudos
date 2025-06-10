#include <stdio.h>

int MMC(int num_a, int num_b);

int main() {
    int num_1, num_2, i, maior, menor, aux_1, aux_2, mmc=1; 
    printf("Insira um número: ");
    scanf("%d", &num_1);

    printf("Insira outro número: ");
    scanf("%d", &num_2);

    printf("O MMC entre %d e %d é %d", num_1, num_2, MMC(num_1, num_2));
    return 0;
}

int MMC(int num_a, int num_b) {
    int i, maior, menor, mmc=1;

    maior = num_a;
    menor = num_a;

    if (num_b>maior) {
        maior = num_b;
        menor = num_a;
    }
    else if (num_b<menor) {
        menor = num_b;
        maior = num_a;
    }
    for(i=2; i<maior; i++) {
        while(num_a % i == 0 || num_b % i == 0) {
            if(num_a%i==0) {
                mmc *= i;
                num_a /= i;
                if(num_b%i==0) {
                    num_b /= i;
                }
            }
            else if(num_b%i==0) {
                mmc *= i;
                num_b /= i;
            }
        }
    }
    return mmc;
}