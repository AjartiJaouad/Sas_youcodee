#include <stdio.h>


int main() {
    float r;
    const float PI = 3.14159;


    printf("Entrez le rayon de la sphere : ");
    scanf("%f", &r);
     

    float volume = (4.0 / 3) * PI * r * r * r;
    printf("Volume : %.2f\n", volume);

    return 0;
}