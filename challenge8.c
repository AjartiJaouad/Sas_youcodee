#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;
    printf("Entrez trois nombres : ");
    scanf("%f %f %f", &a, &b, &c);

    float moyenne = cbrt(a * b * c);  
    printf("Moyenne geometrique : %.2f\n", moyenne);

    return 0;
}