#include <stdio.h>

int main() {
    int n;

    printf("Entrez un entier decimal (0  a 255) : ");
    scanf("%d", &n);

    printf("Hexadecimal : %x\n", n);  
    printf("Binaire : ");
    printf("%d", (n / 64) % 2);
    printf("%d", (n / 32) % 2);
    printf("%d", (n / 16) % 2);
    printf("%d", (n / 8) % 2);
    printf("%d", (n / 4) % 2);
    printf("%d", (n / 2) % 2);
    printf("%d\n", n % 2);

    return 0;
}