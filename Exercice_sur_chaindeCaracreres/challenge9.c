#include <stdio.h>

int main() {
    char str[100];  
    int i = 0, j = 0;

    printf("Entrez une chaine : ");
    fgets(str, sizeof(str), stdin); 

  
    while (str[i] != '\0') {
        if (str[i] != ' ') {  
            str[j] = str[i];  
            j++;
        }
        i++;
    }

    str[j] = '\0';  
    printf("Chaine sans espaces : %s\n", str);

    return 0;
}
