#include <stdio.h>
typedef struct
{ 
  char nom[100]; 
  char prenom[100];
  int Notes[4];

}Etudients;


int main(){

Etudients etude = {"mariam","louqliai",{14,15,16,17}};

printf("%s %s ",etude.nom,etude.prenom);

for (int i = 0; i < 4; i++)
{ printf("%d",etude.Notes[i]); }

return 0;
}
