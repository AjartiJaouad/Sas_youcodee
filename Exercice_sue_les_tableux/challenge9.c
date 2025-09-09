#include <stdio.h>

int main() {
    int n, i;

    printf("\n--- Inversion d'un tableau ---\n");
    printf("Entrez le nombre d'elements : ");
    scanf("%d", &n);

    int T[n], T_inversee[n];

    for (i = 0; i < n; i++) {
        printf("Saisir l'element T[%d] : ", i);
        scanf("%d", &T[i]);
    }

    for (i = 0; i < n; i++) {
        T_inversee[n - i - 1] = T[i];
    }

    printf("\nTableau original\tTableau inverse\n");
    for (i = 0; i < n; i++) {
        printf("T[%d] = %d\t\tT_inversee[%d] = %d\n", i, T[i], i, T_inversee[i]);
    }

    return 0;
}
