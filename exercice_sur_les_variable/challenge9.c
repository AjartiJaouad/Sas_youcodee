#include <stdio.h>
#include <math.h>

int main() {
    float x1, y1, z1, x2, y2, z2, Distance;

    printf("Saisir les coordonnes du premier point (x1 y1 z1): ");
    scanf("%f %f %f", &x1, &y1, &z1);

    printf("Saisir les coordonnees du deuxieme point (x2 y2 z2): ");
    scanf("%f %f %f", &x2, &y2, &z2);

    Distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2) + pow(z2 - z1, 2));

    printf("La distance entre les deux points est : %.2f\n", Distance);

    return 0;
}
