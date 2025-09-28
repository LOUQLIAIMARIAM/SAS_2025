#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>


int main(){

//  // Longueur de la Chaîne <-
 
//  char chaine[100] = "Bonjour";
//  int longer = strlen(chaine);
//  printf("%d",longer);
 
//  // Concaténation de Chaînes <-
//  printf("\n\n");
//  char name[100];
//  char firstname[100];
//  printf("Entrez chaine 1 :");
//  scanf("%s",name);
//  printf("Entrez chaine 2 :");
//  scanf("%s",firstname);
//  printf("%s",strcat(name,firstname));
 
//  // Comparaison de Chaînes <-
//  printf("\n\n");
//  char Name[100];
//  char Firstname[100];
//  printf("Entrez chaine 1 :");
//  scanf("%s",Name);
//  printf("Entrez chaine 2 :");
//  scanf("%s",Firstname);

//  if(strcmp(Name,Firstname) == 0){
//     printf("les chaînes sont égales ");
//  }else{
//     printf("les chaînes sont différentes ");
//  }
 
//  // Conversion en Majuscules
//  printf("\n\n");
//  char Chaine[100];
//  printf("Entrez chaine  :");
//  scanf("%s",Chaine);
//  int Longer = strlen(Chaine);

//  for(int i =0 ; i< Longer ; i++){
//     printf(" %c",toupper(Chaine[i]));
   
//  }
//  //  printf(" %c Minuscules ",tolower(Chaine[i]));

 

//   //Compte des Occurrences d'un Caractère
//    printf("\n\n");
//    char cHaine[100];
//    printf("Entrez cHaine  :");
//    scanf("%s",cHaine);
//    int lOnger = strlen(cHaine);
//    int count = 0 ;
//     for (int i = 0; i < lOnger; i++) {
//         if (cHaine[i] == ' ')  
//             continue;

//         int count = 1;

//         for (int j = i + 1; j < lOnger; j++) {
//             if (cHaine[i] == cHaine[j]) {
//                 count++;
//                 cHaine[j] = ' ';  // mark as counted
//             }
//         }

//         printf("%c : %d\n", cHaine[i], count);
//     }
    

//     char name1[100];
//     printf("Entrez votre nom : ");
//     scanf("%s", name1);  // Lire une chaîne

//     int length = strlen(name1);

//     printf("Nom inversé : ");
//     for (int i = length - 1; i >= 0; i--) {
//         printf("%c", name1[i]);
//     }



  printf("\n\n");
  char sentence[100];
  printf("entrez sentence : ");
  fgets(sentence, sizeof(sentence), stdin);
  int lenth =  strlen(sentence);
 for (int i = 0; i < lenth; i++) {
    if (sentence[i] == ' ') {
        for (int j = i; j < lenth; j++) {
            sentence[j] = sentence[j + 1];
        }
        lenth--;
        i--;
    }
 }
 printf("%s",sentence);





 return 0;

}
