#include <stdio.h>
int  main(){
  // Challenge 4 :Conversion de la vitesse

  float vitesse;
  printf("Entrer la  vitesse :");
  scanf("%f",&vitesse);
  float ms  = vitesse * 0.27778;
  printf("%.2f",ms);

  return 0;
}