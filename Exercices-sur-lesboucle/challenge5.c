

#include <stdio.h>

int main() {
    int base, exposant;
    long resultat = 1;  
    float resultat_negatif = 1.0; 

    printf("Entrez la base : ");
    scanf("%d", &base);

    printf("Entrez l'exposant : ");
    scanf("%d", &exposant);

    if (exposant == 0) {
        resultat = 1; 
        printf("%d^%d = %ld\n", base, exposant, resultat);
    } else if (exposant > 0) {
        for (int i = 1; i <= exposant; i++) {
            resultat *= base; 
        }
        printf("%d^%d = %ld\n", base, exposant, resultat);
    } else {  
        for (int i = 1; i <= -exposant; i++) {
            resultat_negatif *= base;
        }
        printf("%d^%d = %.5f\n", base, exposant, 1.0 / resultat_negatif);
    }

    return 0;
}
