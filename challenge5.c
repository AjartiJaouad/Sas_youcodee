#include <stdio.h>
int main(){
 float   T ;
 printf("saisie  la tempertu en celesius :\n ");
 scanf("%f",&T);
  
  if ( T< 0){
    printf("l'etat de laeou est : \t soulide (glace)");



  }else if (T>0 && T<100){
    printf("l'etat de laeou est : \t Gaze (liqide)");
  }else{
    printf("l'etat de laeou est : \t Gazr (vapeur)");
  }


    return 0;
}
