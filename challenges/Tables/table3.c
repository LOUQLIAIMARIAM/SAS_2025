#include <stdio.h>

int main(){
     
    // search <-

    int taille;
    printf("entez la taille de tableaux :");
    scanf("%d",&taille);
    

    int tab[taille];
    for(int i=0;i<taille;i++){
        printf("entrez les element du tableaux :");
        scanf("%d",&tab[i]);
    }

    int varSearch ;
    printf("entez l'element a rechercher :");
    scanf("%d",&varSearch);

    int search;
    for(int i=0;i<taille;i++){
        search = tab[i];
        if(varSearch == search){
            printf("%d",varSearch);
            break;
        }

         if (i == taille-1) {
            printf("La valeur n'existe pas.\n");
           
        }
    }

    // modifier 

    int varEdit ;
    printf("entez l'element a Modifer :");
    scanf("%d",&varEdit);

    int newVal;
    printf("entez la novelle valeur :");
    scanf("%d",&newVal);

    
    for(int i=0;i<taille;i++){
       if(tab[i] == varEdit){  
            tab[i] = newVal;
            newVal = tab[i];
            break;
       }
       printf("%d",newVal);
       
    }
    
    for(int i=0;i<taille;i++){
        printf("%d",tab[i]);
    }


    



   

    






    return 0;
}