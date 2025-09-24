#include <stdio.h>

int main(){
  int nbr;
  printf("Entrer le nombre ");
  scanf("%d",&nbr);
  if(nbr % 2 == 0){
    printf("Le nombre est Pair");
  }else{
    printf("Le nombre est Impaire");
  }

  return 0;
  
}