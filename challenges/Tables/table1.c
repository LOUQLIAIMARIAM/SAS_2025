#include <stdio.h>
#include <math.h>

int main(){

     //  Initialisation et Affichage <-

    int tableaux[] = {1,2,3,4,5};
    for(int i=0;i<5;i++){
        printf("%d",tableaux[i]);
    }

     //Saisie et Affichage des Éléments <-
    
    int tab1[2];
    for(int i=0;i<2;i++){
        printf("entrer element: ");
        scanf("%d",&tab1[i]);
    }

    for(int i=0;i<2;i++){
        printf("%d",tab1[i]);
    }

    // Somme des Éléments <-

    int tab2[] ={6,2};
    int somme = 0;
    for(int i=0;i<2;i++){
        printf("%d\n",tab2[i]);
        somme+=tab2[i];
    }
    printf(" la somme des element du tableau est : %d",somme);



   // Multiplication des Éléments <-

    int facteur;
    printf("entere le facteur :");
    scanf("%d",&facteur);
    int tab6[]={1,2,3,4,5};
    int multi;

    for(int i=0;i<5;i++){
     multi= facteur*tab6[i];
     printf("%d * %d = %d\n",facteur,tab6[i],multi);
    }
    
   
     
    




  

   

    






    return 0;
}