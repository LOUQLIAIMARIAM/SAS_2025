#include <stdio.h>
int main(){
    // with for
   
    int fact = 1;
    int n;
    printf("Entrez un nombre entier positif :");
    scanf("%d",&n);
    printf("Entrez un nombre entier positif :");
    scanf("%d",&n);
    for(int j=1;j<=n;j++){
        fact*=j;
    }
    printf("%d",fact);
    

    // with while

    int i =1;
    while(i<=n){
        fact*=i;
        i++;
    }
    printf("%d",fact);
   
    // with do while  <-
    int a=1;
    do{
       fact*=a;
       a++;
    }while(a<=n);
    printf("%d",fact);
    

    return 0;
}