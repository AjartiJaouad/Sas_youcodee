#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100]; 

    printf("Entrez une chaine : ");
    fgets(str, sizeof(str), stdin);  

    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = tolower(str[i]);
    }

    printf("Chaine en minuscules : %s\n", str);

    return 0;
}
