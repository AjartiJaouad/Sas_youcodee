#include <stdio.h>
#include <math.h>   

int main() {
    float a, b, c, moyenneGeo;

    printf("Entrez le 1er nombre : ");
    scanf("%f", &a);

    printf("Entrez le 2eme nombre : ");
    scanf("%f", &b);

    printf("Entrez le 3eme nombre : ");
    scanf("%f", &c);

    moyenneGeo = cbrt(a * b * c);

    printf("\nLa moyenne geomtrique est : %.2f\n", moyenneGeo);

    return 0;
}
