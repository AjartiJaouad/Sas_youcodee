#include <stdio.h>

int produit(int a, int b) {
    return a * b;
}

int main() {
    int n1, n2, resultat;

    printf("Entrez le premier nombre : ");
    scanf("%d", &n1);

    printf("Entrez le deuxieme nombre : ");
    scanf("%d", &n2);

    resultat = produit(n1, n2);

    printf("Le produit des deux nombres saisis est : %d\n", resultat);

    return 0;
}
