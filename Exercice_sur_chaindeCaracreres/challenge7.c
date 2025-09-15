#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];  

    printf("Entrez une chaine : ");
    fgets(str, sizeof(str), stdin);  

    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = toupper(str[i]);
    }

    printf("Chaine en majuscules : %s\n", str);

    return 0;
}
