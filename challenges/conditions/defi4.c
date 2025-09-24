#include <stdio.h>
 int main(){

    // with if statement
     
    float Moyenne;
    printf("Entrer votre Moyenne :");
    scanf("%f",&Moyenne);

    if(Moyenne >= 0 && Moyenne <=9){
        printf("Echec");
    }else if(Moyenne >= 10 && Moyenne  <= 12){
        printf("Assez bien");
    }else if(Moyenne >= 16 && Moyenne <= 18){
        printf("bien");
    }else if(Moyenne == 19 || Moyenne == 20){
        printf("bien");
    }

     

  

    int n;
    printf("Entrez votre  Moyenne : ");
    scanf("%d", &n);

    switch (n) {
        case 0:
        case 9:
            printf("Echec.\n");
            break;

        case 10:
        case 12:
            printf("Assez bien.\n");
            break;

        case 16:
        case 18:
            printf("bien\n");
            break;
        case 19:
        case 20:
            printf("Tres bien\n");
            break;

        default:
            printf("Ce nombre n'est pas dans les cas prévus.\n");
    }

    return 0;
}


