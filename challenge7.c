#include <stdio.h>

int main() {
    float a, b, c, moyenne;

    printf("Entrez trois nombres : ");
    scanf("%f %f %f", &a, &b, &c);

    moyenne = (a * 2 + b * 3 + c * 5) / (2 + 3 + 5);

    printf("Moyenne pondere : %.2f\n", moyenne);

    return 0;
}