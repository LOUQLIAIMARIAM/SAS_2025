#include <stdio.h>
 int main(){
    // nombre pair
    int taille;
    printf("entrez la taille du tableau : ");
    scanf("%d",&taille);

    int tab[taille];
    for(int i=0;i<taille;i++){
        printf("Entrez un les elements :");
        scanf("%d",&tab[i]);
    }
    
    for(int i=0;i<taille;i++){
     if(tab[i]%2 == 0){
        printf("%d",tab[i]);
     }
        
    }

    // nombre Impair

    int taille;
    printf("entrez la taille du tableau : ");
    scanf("%d",&taille);

    int tab[taille];
    for(int i=0;i<taille;i++){
        printf("Entrez un les elements :");
        scanf("%d",&tab[i]);
    }
    
    for(int i=0;i<taille;i++){
     if(tab[i]%2 != 0){
        printf("%d",tab[i]);
     }
        
    }


 }

