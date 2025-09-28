#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char Livres[2][4][100];
int nbrLivres = 2;

void Ajouter(){
    

    for (int i = 0; i < 2; i++) {
        printf("Entrez le titre du livre %d : ", i + 1);
        scanf("%s", Livres[i][0]);

        printf("Entrez l'auteur du livre %d : ", i + 1);
        scanf("%s", Livres[i][1]);

        printf("Entrez le prix du livre %d : ", i + 1);
        scanf("%s", Livres[i][2]);

        printf("Entrez la quantité du livre %d : ", i + 1);
        scanf("%s", Livres[i][3]);
    }
}

void Afficher(){
    printf("\nListe des livres :\n");
    for (int i = 0; i < 2; i++) {
        printf("Livre %d : Titre: %s, Auteur: %s, Prix: %s, Quantité: %s\n",
        i + 1, Livres[i][0], Livres[i][1], Livres[i][2], Livres[i][3]);
    }
}




void search(){

    int exist = 0 ;
    char titre[100];
    
    printf("Entrez  le titre A chercher : ");
    scanf("%s",&titre);

    for(int i=0; i<2 ;i++){
        if(strcmp(Livres[i][0], titre) == 0){
            printf(" Le titre que tu recherche est : %s",Livres[i][0]);
            exist = 1;
            break;
        }
    }

    if(!exist){
        printf("il n'exist pas");
    }
}

void EditQuantity(){
    char temp[100];
    char Nouvelle[100];
    printf("Entrez la nouvelle quantity  :");
    scanf("%s",Nouvelle);
    char qt[100];
    printf("Entrez le quantity que tu veux modifier : ");
    scanf("%s",qt);

    

    for(int i=0; i<2; i++){
        if(strcmp(Livres[i][3],qt) == 0){
           strcpy(temp, Livres[i][3]);         
           strcpy(Livres[i][3], Nouvelle);     
           strcpy(Nouvelle, temp);
           break;
        }

    }

}



void DeleteLivre(){

char delLivre[100];
    printf("Entrez le titre du livre à supprimer : ");
    scanf("%s", delLivre);

    for (int i = 0; i < nbrLivres; i++) {
        if (strcmp(delLivre, Livres[i][0]) == 0) {
            for (int j = i; j < nbrLivres; j++) {
                strcpy(Livres[j][0], Livres[j+1][0]);
                strcpy(Livres[j][1], Livres[j+1][1]);
                strcpy(Livres[j][2], Livres[j+1][2]);
                strcpy(Livres[j][3], Livres[j+1][3]);
            }
            nbrLivres--;
            printf("Livre supprimé avec succès.\n");
            return;
        }
    }

    printf("Livre non trouvé.\n");
}

  



void QstockTotal() {
    int total = 0;

    for (int i = 0; i < 2; i++) {
        int q = atoi(Livres[i][3]);
        total += q;
    }

    printf("Total des quantités en stock : %d\n", total);
}




int main(){

    printf("\n\n");

    int choix;

    do{
    
    printf("1.Ajouter un livre au stock.\n2.Afficher tous les livres disponibles.\n3.Rechercher un livre par son titre.\n4.Mettre à jour la quantité d'un livre.\n5.Supprimer un livre du stock.\n6.Afficher le nombre total de livres en stock. \n0.Quittez\n");
    printf("Entrez votre choix  : ");
    scanf("%d",&choix);
    printf("\n\n");
    switch (choix)
    {
    case 1:
        Ajouter();
        printf("\n\n");
        break;
    case 2:
        Afficher();
        printf("\n\n");
        break;
    case 3:
        search();
        printf("\n\n");
        break;    
    case 4:
        EditQuantity();
        printf("\n\n");
        break;     
    case 5:
        DeleteLivre();
        printf("\n\n");
        break; 
    case 6:
        QstockTotal();
        printf("\n\n");
        break;     
    case 7:
        printf("Vous avez quittez le programme");
        printf("\n\n");
        break;   
    case 0:
      printf("Fin du programme.\n");
      return 0; 

    default:
        printf("Vuillez respectez le menu \n ");
        break;
    }
    choix ++;
    }while(choix != 0);

   
    //

  



    return 0;


}
