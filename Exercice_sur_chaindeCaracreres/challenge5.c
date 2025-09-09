#include <stdio.h>

int main() {
    char str[100];
    int i = 0, j, temp;

    printf("Entrez une chaine : ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0' && str[i] != '\n') {
        i++;
    }
    j = i - 1; 
    i = 0;
    while (i < j) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }

    printf("Chane inversee : %s\n", str);

    return 0;
}
