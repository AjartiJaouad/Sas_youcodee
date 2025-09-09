#include <stdio.h>

int main() {
    char str[100], c;
    int i = 0, compteur = 0;

    printf("Entrez une chaine : ");
    fgets(str, sizeof(str), stdin);

    printf("Entrez le caractere a chercher : ");
    scanf("%c", &c);

    while (str[i] != '\0' && str[i] != '\n') {
        if (str[i] == c) {
            compteur++;
        }
        i++;
    }

    printf("Le caracte '%c' trouvee  %d fois dans la chaine.\n", c, compteur);

    return 0;
}
