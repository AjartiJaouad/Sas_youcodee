#include <stdio.h>

int main() {
    int a, b, Rs;

    printf("Entrer deux nombre  entiers: \n");
    scanf("%d %d", &a, &b);

    if (a == b) {
        Rs = 3 * (a + b);
    } else {
        Rs = a + b;
    }

    printf("Resultat : %d\n", Rs);

    return 0;
}
