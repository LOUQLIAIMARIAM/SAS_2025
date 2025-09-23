#include <stdio.h>
int  main(){
 
    // Challenge 3 :Conversion de la distance

  float distance;
  printf("Entrer la distance :");
  scanf("%f",&distance);
  float  Yards  = distance *1093.61;
  printf("%.2f",Yards);

  return 0;
}