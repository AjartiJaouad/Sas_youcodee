#include <stdio.h>
int main() {
char nom [50], Prenom [50],  sexe[10],email[100];
int Age ;
    printf("entre votre nom \n ");
	scanf("%s",&nom);
	    printf("entre votre Prenom\n ");
	scanf("%s",&Prenom);
	    printf("entre votre age\n ");
	scanf("%d",&Age);
    printf("entre votre sexe \n ");
	scanf("%s",&sexe);
	    printf("entre votre email \n ");
	scanf("%s",&email);
	printf("Nom : \t %s \n",nom);
	printf("Prenom : %s \t  \n",Prenom);
	printf("Age	: \t %d \n",Age);
	printf("Email : \t %s \n",email);
	printf("Sexe : \t %s \n",sexe);
    return 0;
}
