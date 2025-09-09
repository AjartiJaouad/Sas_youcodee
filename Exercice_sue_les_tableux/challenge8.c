#include <stdio.h>

int main() {
    int nombre_elements, i;

    printf("\n--- Copie d'un tableau ---\n");
    printf("Entrez le nombre d'elements : ");
    scanf("%d", &nombre_elements);

    int T[nombre_elements];
    for (i = 0; i < nombre_elements; i++) {
        printf("Saisir l'element T[%d] : ", i);
        scanf("%d", &T[i]);
    }
  int T_copie[nombre_elements];

    for (i = 0; i < nombre_elements; i++) {
        T_copie[i] = T[i];
    }

    printf("\nTableau original\tTableau copie\n");
    for (i = 0; i < nombre_elements; i++) {
        printf("T[%d] = %d\t\tT_copie[%d] = %d\n", i, T[i], i, T_copie[i]);
    }

    return 0;
}
