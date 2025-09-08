#include <stdio.h>

int main() {
    int i;
    int T[5] = {1, 2, 3, 4, 5};  
    
    printf("--- Affichage dun tableau ---\n");
    
    for (i = 0; i < 5; i++) {
        printf("T[%d] = %d\n", i, T[i]);
    }

    return 0;
}
