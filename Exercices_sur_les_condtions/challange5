#include <stdio.h>

int main() {
    int annee, mois, jours, heures, minutes, secondes;
    int choix;

    printf("Convertisseur d annees (Menu interactif)\n");
    printf("1: Mois\n");
    printf("2: Jours\n");
    printf("3: Heures\n");
    printf("4: Minutes\n");
    printf("5: Secondes\n");
    printf("Votre choix : ");
    scanf("%d", &choix);

    if (choix >= 1 && choix <= 5) {
        printf("Entrez lannee : ");
        scanf("%d", &annee);

        switch (choix) {
            case 1:
                mois = annee * 12;
                printf("%d annee(s) = %d mois\n", annee, mois);
                break;
            case 2:
                jours = annee * 365;
                printf("%d annee(s) = %d jours\n", annee, jours);
                break;
            case 3:
                heures = annee * 365 * 24;
                printf("%d annee(s) = %d heures\n", annee, heures);
                break;
            case 4:
                minutes = annee * 365 * 24 * 60;
                printf("%d annee(s) = %d minutes\n", annee, minutes);
                break;
            case 5:
                secondes = annee * 365 * 24 * 60 * 60;
                printf("%d annee(s) = %d secondes\n", annee, secondes);
                break;
        }
    } else {
        printf("Choix invalide\n");
    }

    return 0;
}
