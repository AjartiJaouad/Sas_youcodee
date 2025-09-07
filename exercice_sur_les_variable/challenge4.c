#include <stdio.h>

int main() {
    float Vkm, Vms;

    printf("Donnez la vitesse en kilometres par heure (km/h) : ");
    scanf("%f", &Vkm);

   
    Vms = Vkm * 0.27778;

    printf("%.2f km/h  = %.2f m/s\n", Vkm, Vms);

    return 0;
}

