#include <stdio.h>

int main() {
    int n, nombre = 2;
    printf("Entrez le nombre de termes : ");
    scanf("%d", &n);

    printf("Les %d premiers nombres pairs sont : ", n);
    for (int i = 1; i <= n; i++) {
        printf("%d ", nombre);
        nombre += 2; 
    }

    return 0;
}
