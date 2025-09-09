#include <stdio.h>

int est_pair(int nombre) {
    if (nombre % 2 == 0) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int x;
    printf("Entrez un nombre : ");
    scanf("%d", &x);

    if (est_pair(x)) {
        printf("%d est pair.\n", x);
    } else {
        printf("%d est impair.\n", x);
    }

    return 0;
}
