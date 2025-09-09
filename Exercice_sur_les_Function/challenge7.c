#include <stdio.h>
#include <string.h>

void inverser_chaine(char str[]) {
    int N = strlen(str);
    char tmp;
    for (int i = 0; i < N / 2; i++) {
        tmp = str[i];
        str[i] = str[N - 1 - i];
        str[N - 1 - i] = tmp;
    }
}

int main() {
    char chaine[30];
    printf("Entrez votre chaine : ");
    scanf("%29s", chaine); 

    inverser_chaine(chaine);
    printf("La chaine inverse : %s\n", chaine);

    return 0;
}
