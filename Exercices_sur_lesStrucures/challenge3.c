#include <stdio.h>

struct Rectangle {
    int longueur;
    int largeur;
};

int calculerAire(struct Rectangle rect) {
    return rect.longueur * rect.largeur;
}

int main() {
    struct Rectangle monRectangle;
    monRectangle.longueur = 10;
    monRectangle.largeur = 5;

    int aire = calculerAire(monRectangle);

    printf("L'aire du rectangle est : %d\n", aire);

    return 0;
}