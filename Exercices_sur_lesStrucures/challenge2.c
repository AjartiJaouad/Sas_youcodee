#include <stdio.h>

const int max_notes = 3;

struct Etudiant {
    char nom[50];
    char prenom[50];
    int notes[3]; 
};

int main() {
    struct Etudiant etudiant1;
    printf("Entrez le nom de l'etudiant : ");
    scanf("%s", etudiant1.nom);

    printf("Entrez le prenom de l'etudiant : ");
    scanf("%s", etudiant1.prenom);

    printf("Entrez les %d notes de l'etudiant :\n", max_notes);
    for (int i = 0; i < max_notes; i++) {
        printf("Note %d : ", i + 1);
        scanf("%d", &etudiant1.notes[i]);
    }

    printf("\n--- Informations de l'etudiant ---\n");
    printf("Nom : %s\n", etudiant1.nom);
    printf("Prenom : %s\n", etudiant1.prenom);

    printf("Notes :\n");
    for (int i = 0; i < max_notes; i++) {
        printf("- Note %d : %d\n", i + 1, etudiant1.notes[i]);
    }

    return 0;
}