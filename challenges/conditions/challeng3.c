#include <stdio.h>
 int main (){

    int a,b;
    printf("Entrez le nombre 1 :");
    scanf("%d",&a);
     printf("Entrez le nombre 2 :");
    scanf("%d",&b);
    int somme = a+b;
    printf("%d",somme);
    if(a == b){
      int  triple =  somme * 3;
      printf("%d",triple);
    }
    


}