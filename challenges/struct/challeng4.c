#include <stdio.h>

typedef struct
{
   char auteur[100];
   char titre[100];
   int annee;


}Livres;

void ListLivres(Livres v){
    printf("%s %s %d",v.titre,v.auteur,v.annee);
}


int main(){

    Livres l = {"moby dack","haerny",1989};
    ListLivres(l);

    return 0;

}