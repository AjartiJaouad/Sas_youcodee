
#include <stdio.h>


int main() {

int nombre_delemon  ,i;
    printf("\n---Affichage les element  d'un tabeleaux---\n");
    printf("lentrer le nombre delemment\n");
   scanf("%d",&nombre_delemon);
   int T[nombre_delemon];

   for (i=0;i<nombre_delemon;i++){
    printf("saisir les elemen de tableaux\n");
       scanf("%d",&T[i]);

   };
   for (i=0;i<nombre_delemon;i++){
    
    printf(" les elements du tableau  son :T[%d]=%d\n",i,T[i]);
      

   };
   
   

    
    return 0;
}
