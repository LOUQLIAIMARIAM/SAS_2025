#include <stdio.h>
 int main(){
     
    float temperateur;
    printf("Entrez la temperateur en Celsius :");
    scanf("%f",&temperateur);
    if(temperateur < 0){
        printf("solide");
    }else if(temperateur >=0 && temperateur < 100){
        printf("liquide");
    }else if(temperateur >=100){
        printf("Gaz");
    }else{
        printf("invalid");
    }
 }