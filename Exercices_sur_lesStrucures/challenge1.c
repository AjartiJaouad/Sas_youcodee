
#include <stdio.h>
 struct  Personne {
     char nom[20];
     char prenom[20];
     int age ;
     
 };
 typedef struct  Personne P ;
void main() {
  P employer ;
  printf ("donner le nom :\n");
gets(employer.nom);
  printf ("donner le PRenomnom :\n");
  scanf("%s",&employer.prenom);
  printf ("donner l age  :\n");
  scanf("%d",&employer.age);
  printf("Informations de l'employe :\n");
    printf("Nom : %s\n", employer .nom);
    printf("Prenom : %s\n", employer .prenom);
    printf("Age : %d ans\n", employer .age);

  
}