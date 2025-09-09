#include <stdio.h>
long long factorielle(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * factorielle(n - 1);
    }
}

int main() {
    int n;

    printf("Entrez un nombre entier positif : ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Veuillez entrer un nombre positif.\n");
    } else {
        printf("La factorielle de %d est : %lld\n", n, factorielle(n));
    }

    return 0;
}
