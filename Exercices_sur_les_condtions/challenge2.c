#include <stdio.h>

int main()
{
    char c;

    printf("enterre une caractrerer : \n");
    scanf(" %c", &c);

    switch(c) {
        case 'a': 
        printf("\n %c est une voyelle.", c);
            break;
        case 'e': 
        printf("\n %c est une voyelle.", c);
            break;
        case 'i': 
        printf("\n %c est une voyelle.", c);
            break;
        case 'o':
        printf("\n %c est une voyelle.", c);
            break;
         case 'u':
         printf("\n %c est une voyelle.", c);
            break;
          case 'y':
          printf("\n %c est une voyelle.", c);
            break;
        case 'A': 
        printf("\n %c est une voyelle.", c);
            break;
        case 'E': 
        printf("\n %c est une voyelle.", c);
            break;
        case 'I': 
        printf("\n %c est une voyelle.", c);
            break;
        case 'O':
        printf("\n %c est une voyelle.", c);
            break;
         case 'U':
         printf("\n %c est une voyelle.", c);
            break;
          case 'Y':
            printf("\n %c est une voyelle.", c);
            break;
        default:
            printf("\n %c est une consonne.", c);
            break;
    }

    return 0;
}
