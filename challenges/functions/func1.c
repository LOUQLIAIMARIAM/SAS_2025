#include <stdio.h>
#include <math.h>
#include <string.h> 

//Challenge 1 : Fonction de Somme
int somme(int a, int b){
    return a+b;
}




//Challenge 2 : Fonction de Multiplication
int Multiplication(int a , int b){
    return a*b;
}





//Challenge 3 : Fonction de Maximum
int maximum(int a , int b){
   if(a>b){
    return a;
   }else{
    return b;
   }
}



//Challenge 3 : Fonction de minimum
int minimum(int a , int b){
    if(a<b){
    return a;
   }else{
    return b;
   }
}




// Challenge 5 : Fonction de Factorielle
int fact(int a){
    int facto = 1;
    for(int  i=1 ;i<=a; i++){
        facto*=i;
    }
    return facto;
}



// Challenge 6 : Fonction de Fibonacc
int fibonacci(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;

    int a = 0, b = 1, fib;
    for (int i = 2; i <= n; i++) {
        fib = a + b;
        a = b;
        b = fib;
    }
    return fib;
}



//challenge  7 : Fonction d'Inversion de Chaîne <-
void InversiondeChaine(char name[100]) {
    printf("Entrez votre nom : ");
    scanf("%s", name);

    int length = strlen(name);

    printf("Nom inversé : ");
    for (int i = length - 1; i >= 0; i--) {
        printf("%c", name[i]);
    }
    printf("\n");
}



//challenge 8 : Fonction de Vérification de Parité.
int Parite(int a){
    if(a % 2 == 0){
        return 1;
    }else{
        return 0;
    }
}




int main(){



 printf("La somme est :%d\n" , somme(1,2));
 printf("La Multiplication  est :%d\n" , Multiplication(1,2));
 printf("le minimum est :%d\n",minimum(1,2));
 printf("le Maximum est :%d\n",maximum(1,2));
 printf("le factoriel d'un nombre  est  :  %d\n ",fact(3));
 printf("le fibonacci d'un nombre  est :  %d\n",fibonacci(2));
 printf("le Parite d'un nombre  est :  %d\n",Parite(3));
 char nom[100]; 
 InversiondeChaine(nom); 
   

 


}