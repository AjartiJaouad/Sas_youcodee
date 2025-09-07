#include <stdio.h>

int main() {
    float a, b ;
    
    printf("Entrez le premier nombre : ");
    scanf("%f", &a);
    
    printf("Entrez le deuxième nombre : ");
    scanf("%f", &b);

    printf("\n \tResultats des operations :\n");
    printf(" Addition  :%.2f + %.2f = %.2f\n", a, b, a + b);
    printf("Soustraction :%.2f - %.2f = %.2f\n", a, b, a - b);
    printf(" Multiplication  :%.2f * %.2f = %.2f\n", a, b, a * b);

    if (b != 0) {
        printf(" Division  :%.2f / %.2f = %.2f\n", a, b, a / b);
    } else {
        printf("Division par zero impossible ❌n");
    }

    return 0;
}
