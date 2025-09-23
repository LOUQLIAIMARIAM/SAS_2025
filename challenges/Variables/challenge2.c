#include <stdio.h>

int main(){
  //Challenge 2 : Conversion de la température:

  float c;
  printf("Entrer le degree Celsius :");
  scanf("%f",&c);
  float Kelvin = c + 273.15;
  printf("La température en Kelvin %.2f",Kelvin);

  return 0;

}