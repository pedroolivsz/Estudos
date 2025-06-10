#include <stdio.h>

int MMC(int num_a, int num_b);

int main() {
    int num_1, num_2; 
    printf("Insira um número: ");
    scanf("%d", &num_1);

    printf("Insira outro número: ");
    scanf("%d", &num_2);

    printf("O MMC entre %d e %d é %d", num_1, num_2, MMC(num_1, num_2));
    return 0;
}

int MMC(int num_a, int num_b) {
    int mmc=1, divisor_i=2, divisor_f=num_a*num_b;

    while(divisor_i<=divisor_f) {
        while(num_a%divisor_i==0 || num_b%divisor_i==0) {
            mmc*=divisor_i;
            if(num_a%divisor_i==0) {
                num_a/=divisor_i;
            }
            if(num_b%divisor_i==0) {
                num_b/=divisor_i;
            }
        }
        divisor_i++;
    }
    return mmc;
}