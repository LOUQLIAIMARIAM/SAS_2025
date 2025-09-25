#include <stdio.h>


int main(){

   // Min Max dans tableaux <-

  int taille;
  printf("entrer la taille du tableaux :");
  scanf("%d",&taille);
   int tab[taille];
   printf("Entrez les elements du tableau :\n");
    for (int i = 0; i < taille; i++) {
        printf("Element %d : ", i + 1);
        scanf("%d", &tab[i]);
    }


  
  int max = tab[0];
  for(int i=1;i<taille;i++){
       if(tab[i] > max){
        max = tab[i];
       }
    }
    printf("%d",max);



  int min = tab[0];
  for(int i=1;i<taille;i++){
     if(tab[i]<min){
        min = tab[i];
     }
  }
  printf("%d",min);
  







   return 0;
}