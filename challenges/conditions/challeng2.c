#include <stdio.h>
int main(){
    
    char c ;
    printf("Entrer un caractere :");
    scanf("  %c",&c);

    switch (c)
    {
    case 'a':
        printf("le caractere et voyelle");
        break;
    case 'o':
        printf("le caractere et voyelle");
        break;
    case 'i':
        printf("le caractere et voyelle");
        break;
    case 'e':
        printf("le caractere et voyelle");
        break;
    case 'u':
        printf("le caractere et voyelle");
        break;
    default:
       printf("Pas voyelle");
        break;
    }


    return 0;
}