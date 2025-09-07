#include <stdio.h>

int main() {
    float longueur, largeur, surface;

    printf("Saisir la longueur du rectangle : ");
    scanf("%f", &longueur);

    printf("Saisir la largeur du rectangle : ");
    scanf("%f", &largeur);

   
    surface = longueur * largeur;

    printf("La surface du rectangle est : %.2f\n", surface);

    return 0;
}
