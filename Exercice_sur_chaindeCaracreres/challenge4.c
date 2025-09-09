#include <stdio.h>

int main() {
    char chaine1[100], chaine2[100];
    int i = 0;
    int identique = 1;  

    printf("Entrez la premiere chaine : ");
    scanf("%s", chaine1);

    printf("Entrez la deuxieme chaine : ");
    scanf("%s", chaine2);

    while (chaine1[i] != '\0' || chaine2[i] != '\0') {
        if (chaine1[i] != chaine2[i]) {
            identique = 0; 
            break;
        }
        i++;
    }

    if (identique == 1) {
        printf("Les chaines sisier par voux son identiques \n");
    } else {
        printf(" Les chaines sisier par voux sont differentes \n");
    }

    return 0;
}
