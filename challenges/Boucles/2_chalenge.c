#include <stdio.h>

int main(){

    int nbr;
    printf("entrez un nombre:");
    scanf("%d",&nbr);
    int somme=0;
    for(int i=1;i<=nbr;i++){
       somme+=i;
    }
    printf("%d",somme);




    return 0;

}