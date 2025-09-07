#include <stdio.h>

int main() {
    float n1, n2, n3, moyenne;

    printf("Entrez le 1er nombre : ");
    scanf("%f", &n1);

    printf("Entrez le 2eme nombre : ");
    scanf("%f", &n2);

    printf("Entrez le 3eme nombre : ");
    scanf("%f", &n3);

    moyenne = ((n1 * 2) + (n2 * 3) + (n3 * 5)) / (2 + 3 + 5);

    printf("\nLa moyenne pondere est : %.2f\n", moyenne);

    return 0;
}
