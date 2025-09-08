#include <stdio.h>

int main() {
    int n, i, somme = 0;

    printf("Entrez le nombre delements du tableau : ");
    scanf("%d", &n);

    int T[n]; 

    for (i = 0; i < n; i++) {
        printf("Entrez l'élément %d : ", i + 1);
        scanf("%d", &T[i]);
        somme += T[i];
    }

   
    printf("\nLa somme des elements du tableau est : %d\n", somme);

    return 0;
}
