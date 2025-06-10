#include <stdio.h>

int main() {
    int *p, x=10;
    p = &x;

    printf("*p: %d\n", *p);
    printf("p: %d\n", p);
    printf("x: %d\n", x);
    printf("&x: %d\n", &x);
}
