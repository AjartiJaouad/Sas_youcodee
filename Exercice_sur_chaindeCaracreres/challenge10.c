#include <stdio.h>
#include <string.h>

int rechercherSousChaineManuel(const char *chaine, const char *sousChaine) {
    int lenChaine = strlen(chaine);
    int lenSousChaine = strlen(sousChaine);

    for (int i = 0; i <= lenChaine - lenSousChaine; i++) {
        int j = 0;
        while (j < lenSousChaine && chaine[i + j] == sousChaine[j]) {
            j++;
        }
        
        if (j == lenSousChaine) {
            return 1;  
        }
    }
    return 0;  
}

int main() {
    char chaine[100], sousChaine[100];

    printf("Entrez la chaîne principale : ");
    fgets(chaine, sizeof(chaine), stdin);

    printf("Entrez la sous-chaîne à rechercher : ");
    fgets(sousChaine, sizeof(sousChaine), stdin);

    chaine[strcspn(chaine, "\n")] = 0;
    sousChaine[strcspn(sousChaine, "\n")] = 0;

    if (rechercherSousChaineManuel(chaine, sousChaine)) {
        printf("La sous-chaîne '%s' a été trouvée dans la chaîne principale.\n", sousChaine);
    } else {
        printf("La sous-chaîne '%s' n'a pas été trouvée.\n", sousChaine);
    }

    return 0;
}
