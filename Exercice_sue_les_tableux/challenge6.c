#include <stdio.h>

int main() {
    int n, facteur, i;

    printf("Entrez le nombre d'elements : ");
    scanf("%d", &n);

    int T[n];

    
    for (i = 0; i < n; i++) {
        printf("Saisir l'element T[%d] : ", i);
        scanf("%d", &T[i]);
    }

    printf("Entrez le facteur de multiplication : ");
    scanf("%d", &facteur);


    for (i = 0; i < n; i++) {
        T[i] = T[i] * facteur;
    }

   
    printf("Tableau apres multiplication :\n");
    for (i = 0; i < n; i++) {
        printf("T[%d] = %d\n", i, T[i]);
    }

    return 0;
}
