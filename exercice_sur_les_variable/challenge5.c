#include <stdio.h>

int main() {
    float T;
    
    printf("Entrez la temperature en Celsius : ");
    scanf("%f", &T);
    
    if (T < 0) {
        printf("a %.2f°C, leau est sous forme solide (glace).\n", T);
    } else if (T >= 0 && T < 100) {
        printf("a %.2f°C, leau est sous forme liquide.\n", T);
    } else {
        printf("a %.2f°C, leau est sous forme gazeuse (vapeur).\n", T);
    }
    
    return 0;
}
