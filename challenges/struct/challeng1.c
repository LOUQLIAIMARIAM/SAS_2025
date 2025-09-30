#include <stdio.h>
// Challenge 1 : Définition et Utilisation de Structure
typedef struct 
{
    char nom[100];
    char prenom[100];
    int age;
}Personne;




int main(){

    Personne p = {"mariam","louqliai",23};

    printf("%s  %s %d",p.prenom,p.nom,p.age);
    
  


  return 0;
}
