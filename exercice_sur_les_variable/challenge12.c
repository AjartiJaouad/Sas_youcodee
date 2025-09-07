#include <stdio.h>

int main() {
    int nombre, inverse;
    int d1, d2, d3, d4;

    printf("Saisir un nombre de  4 chiffres : ");
    scanf("%d", &nombre);

   
    d1 = nombre / 1000;        
    d2 = (nombre / 100) % 10;  
    d3 = (nombre / 10) % 10;   
    d4 = nombre % 10;           

    
    inverse = d4 * 1000 + d3 * 100 + d2 * 10 + d1;

    printf("Linverse du nombre est : %d\n", inverse);

    return 0;
}
