#include <stdio.h>

int main() {
    char c;

    printf("Saisir un caractere : ");
    scanf("%c", &c);

    if (c >= 65 && c <= 90) {
        printf("%c est majuscule\n", c);
    } 
    else if (c >= 97 && c <= 122) {
        printf("%c est  minuscule\n", c);
    } 
    else {
        printf("%c nest pas une lettre alphabtique.\n", c);
    }

    return 0;
}
