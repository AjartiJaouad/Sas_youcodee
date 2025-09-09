#include <stdio.h>

int main() {
    int nombre_elements, min, i;

    printf("\n--- Recherche du minimum dans un tableau ---\n");
    printf("Entrez le nombre d'elements : ");
    scanf("%d", &nombre_elements);

    int T[nombre_elements];

    for (i = 0; i < nombre_elements; i++) {
        printf("Saisir l'element T[%d] : ", i);
        scanf("%d", &T[i]);
    }

    min = T[0];

    for (i = 1; i < nombre_elements; i++) {
        if (T[i] < min) {
            min = T[i];
        }
    }

    printf("\nLes elements du tableau sont :\n");
    for (i = 0; i < nombre_elements; i++) {
        printf("T[%d] = %d\n", i, T[i]);
    }

    printf("\nLe minimum dans le tableau est : %d\n", min);

    return 0;
}
