#include <stdio.h>

int Min(int x, int y) {
    if (x < y) {
        return x;
    } else {
        return y;
    }
}

int main() {
    int min, n1, n2;

    printf("Entrez le premier nombre : ");
    scanf("%d", &n1);

    printf("Entrez le deuxieme nombre : ");
    scanf("%d", &n2);

    min = Min(n1, n2);

    printf("Le minimum des deux nombres saisis est : %d\n", min);

    return 0;
}
