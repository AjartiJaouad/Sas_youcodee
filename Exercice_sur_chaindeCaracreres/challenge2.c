#include <stdio.h>

int main() {
    char texte[100];
    int i = 0;

    printf("Entrez une chaine de caractres: ");
    scanf("%s", texte);  

    while (texte[i] != '\0') {
        i = i + 1;
    }

    printf("La longueur est : %d\n", i);

    return 0;
}
