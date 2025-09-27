#include <stdio.h>

int main(){
    //
    int valid=0;
    int tab[] = {2,5,4,11,8};
    for(int i=0;i<5-1;i++){
        if(tab[i] % 2 == 0 && tab[i+1] % 2 != 0){
        printf(" Motif valid");
        valid = 1;
        break;
        }
    }

    if(!valid){
        printf(" Motif Invalid");
    }
     
    printf("\n\n");

    char tabl[] = {'c', 'k', 'a', 'k', 'c','/0'}; 
    char taille = sizeof(tabl) / sizeof(tabl[0]); //  connait le nombre d'element 
    printf("%d",taille); 
    printf("\n\n");

    int Mirror = 0;

    for(int i = 0; i < taille; i++){
       if(tabl[i] == tabl[taille-1] && tabl[i+1] == tabl[taille-2]){
          Mirror = 1;
          break;
       }
    }

    if(Mirror){
        printf("Mirror");
    }else{
        printf("not Mirror");
    }

    int arr[] = {1,2,4,5,5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int count = 0;
    
  for (int i = 0; i < size; i++) {
    for (int j = 0; j < i; j++) {
        if (arr[i] == arr[j]) {
            count++; 
            break;
        }
    }
 }
 printf("Nombre de elements redondants: %d\n", count);

    



 return 0;

}

