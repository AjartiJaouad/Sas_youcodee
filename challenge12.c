#include <stdio.h>

int main() {
    int n, a, b, c, d, inverse;

    printf("Entrez un nombre de  4 chiffres : ");
    scanf("%d", &n);

    if (n < 1000 || n > 9999) {
        printf("Veuillez entrer un nombre 4 chiffres.\n");
        return 1;
    }

    a = n / 1000;           
    b = (n / 100) % 10;    
    c = (n / 10) % 10;      
    d = n % 10;             

    inverse = d * 1000 + c * 100 + b * 10 + a;

    printf("Linverse est : %d\n", inverse);

    return 0;
}