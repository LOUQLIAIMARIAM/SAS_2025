#include <stdio.h>

int main()
{   
    //sort
      //parcourir table de gauche vers droit avec comparaison des element si un elemet et grand a l'autre fait un remplacement  .
      // Bubble Sort Algorithm.

    int tab[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Entrez l'element numero : ");
        scanf("%d", &tab[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", tab[i]);
    }
    printf("\n\n");
    int temp;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5 - 1-i; i++) //<-  5-1-i pour evitez le deplacements d'index
        {
            if(tab[i]>tab[j+1]){
            temp = tab[j];
            tab[j] = tab[j + 1];
            tab[j + 1] = temp;}
        }
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%d", tab[i]);
    }
}