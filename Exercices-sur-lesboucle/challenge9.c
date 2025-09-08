#include <stdio.h>

int main() {
    int nombre;
    int compteur = 0;

    printf("Entrez un entier positif : ");
    scanf("%d", &nombre);

    if (nombre == 0) {
        compteur = 1; 
    } else {
        while (nombre > 0) {
            compteur++;
            nombre = nombre / 10;  
        }
    }

    printf("Nombre de chiffres : %d\n", compteur);

    return 0;
}

