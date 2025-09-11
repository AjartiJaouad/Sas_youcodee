#include <stdio.h>

struct Produit {
    char nom[50];
    float prix;
    int quantite;
};

const int MAX_PRODUITS = 3;

int main() {
    struct Produit stock[MAX_PRODUITS];

    printf("Entrez les informations pour %d produits :\n", MAX_PRODUITS);
    for (int i = 0; i < MAX_PRODUITS; i++) {
        printf("\n--- Produit %d ---\n", i + 1);
        
        printf("Nom : ");
        scanf("%s", stock[i].nom);
        
        printf("Prix : ");
        scanf("%f", &stock[i].prix);
        
        printf("Quantite : ");
        scanf("%d", &stock[i].quantite);
    }

    printf("\n--- Stock du supermarche ---\n");
    for (int i = 0; i < MAX_PRODUITS; i++) {
        printf("\nProduit %d\n", i + 1);
        printf("Nom      : %s\n", stock[i].nom);
        printf("Prix     : %.2f EUR\n", stock[i].prix);
        printf("Quantite : %d\n", stock[i].quantite);
    }

    return 0;
}