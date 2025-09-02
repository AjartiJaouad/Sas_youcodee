#include <stdio.h>
#include <math.h>

int main() {
    float x1, y1, z1, x2, y2, z2;
    printf("Entrez les coordonnees du 1er point (x1 y1 z1) : ");
    scanf("%f %f %f", &x1, &y1, &z1);
    printf("Entrez les coordonnes du 2e point (x2 y2 z2) : ");
    scanf("%f %f %f", &x2, &y2, &z2);

    float distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2) + pow(z2 - z1, 2));
    printf("Distance : %.2f\n", distance);

    return 0;
}