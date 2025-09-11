#include <stdio.h>

struct Point {
    int x;
    int y;
};

void modifierPoint(struct Point *ptrPoint, int nouveauX, int nouveauY) {
  
    ptrPoint->x = nouveauX;
    ptrPoint->y = nouveauY;
}

int main() {
    struct Point monPoint = {10, 20};

    printf("Valeurs initiales du point : (%d, %d)\n", monPoint.x, monPoint.y);

    
    modifierPoint(&monPoint, 50, 100);

    printf("Nouvelles valeurs du point  : (%d, %d)\n", monPoint.x, monPoint.y);

    return 0;
}