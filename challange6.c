#include <stdio.h>

int main() {
    float a, b ,adtion ,sust ,mult,divs;
    
    printf("Entrez deux nombres : ");
    scanf("%f %f", &a, &b);
    adtion = a + b ;
    sust = a - b ;
    mult = a * b ;
    divs = a / b ;
    printf("Addition : %.2f\n", adtion);
    printf("Soustraction : %.2f\n",sust);
    printf("Multiplication : %.2f\n", mult);
    
    if (b != 0)
        printf("Division : %.2f\n", divs);
    else
        printf("Division  impossible.\n");

    return 0;
}