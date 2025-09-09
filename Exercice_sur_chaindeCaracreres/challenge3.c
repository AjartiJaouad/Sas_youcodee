#include <stdio.h>
#include <string.h>

int main() {
    char chaine1[100], chaine2[100];

    printf("Entrez la premiere chaine : ");
    scanf("%s", chaine1);

    printf("Entrez la deuxieme chaine : ");
    scanf("%s", chaine2);

    strcat(chaine1, chaine2);  

    printf("Chaine concatene  : %s\n", chaine1);

    return 0;
}
