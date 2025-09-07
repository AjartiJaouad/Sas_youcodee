#include <stdio.h>
#include <string.h>

int main() {
    char nom[50];
    char prenom[50];
    int age;
    char sexe[10];
    char email[100];
    
    printf("Saisir votre nom : ");
    scanf("%s", nom);

    printf("Saisir votre prenom : ");
    scanf("%s", prenom);

    printf("Saisir votre Age : ");
    scanf("%d", &age);

    printf("Saisir votre sexe (M/F) : ");
    scanf("%s", sexe);
    
    printf("Saisir votre adresse e-mail : ");
    scanf("%s", email);

    printf("\nInformations personnelles :\n");
    printf("Nom : %s\n", nom);
    printf("Prenom : %s\n", prenom);
    printf("Age : %d\n", age);
    printf("Sexe : %s\n", sexe);
    printf("Adresse e-mail : %s\n", email);
    
    return 0;
}