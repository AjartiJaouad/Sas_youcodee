#include <stdio.h>
#include <math.h>

int main() {
    float r, volume;
    const float M_PI = 3.14;  

    printf("Donnez le rayon de la sphere : ");
    scanf("%f", &r);

    volume = (4.0 / 3.0) * M_PI * pow(r, 3);
    printf("Le volume de la sphere est : %.2f\n", volume);

    return 0;
}
