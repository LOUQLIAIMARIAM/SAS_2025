#include <stdio.h>

 int main(){
     int nbr1,nbr2,nbr3;
     printf("Entrez  le premier nombre :");
     scanf("%d",&nbr1);
     printf("Entrez  le douxieme nombre :");
     scanf("%d",&nbr2);
     printf("Entrez  le troisieme  nombre :");
     scanf("%d",&nbr3);
      if(nbr1 + nbr2 > nbr3 || nbr1 + nbr3 > nbr2 || nbr3 + nbr2 > nbr1){
          printf("les trois nombre forment un triangle ");
          if(nbr1== nbr2  &&  nbr1 == nbr3  ){
            printf("le triangle Équilatéral  ");
          if(nbr1 == nbr2 || nbr2 == nbr3){
            printf("le triangle Isocèle ");
          }else{
            printf(" le triangle Scalène ");
          }
      }else{
          printf(" pas triangle");
      }
    }
     return 0; 
 
}