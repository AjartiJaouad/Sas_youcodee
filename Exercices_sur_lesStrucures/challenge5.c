#include <stdio.h>
#include <string.h>

struct Livre {
    char titre[100];
    char auteur[50];
    int annee;
};

struct Livre creerLivre(const char *titre, const char *auteur, int annee) {
    struct Livre nouveauLivre;

    strcpy(nouveauLivre.titre, titre);
    strcpy(nouveauLivre.auteur, auteur);
    nouveauLivre.annee = annee;

    return nouveauLivre;
}

int main() {
   
    struct Livre monLivre = creerLivre("TAroikh lflsfa Alhdita", "youszef  karam", 1999);

    printf("Informations sur le livre :\n");
    printf("Titre  : %s\n", monLivre.titre);
    printf("Auteur : %s\n", monLivre.auteur);
    printf("Annee  : %d\n", monLivre.annee);

    return 0;
}