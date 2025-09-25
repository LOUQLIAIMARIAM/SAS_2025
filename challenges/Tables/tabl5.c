#include <stdio.h>

int main()
{
    // Moyenne
    int taille;
    printf("entrez la taille du tableau : ");
    scanf("%d", &taille);

    int tab[taille];
    for (int i = 0; i < taille; i++)
    {
        printf("Entrez un les elements :");
        scanf("%d", &tab[i]);
    }
    float Moyenne;
    int somme = 0;
    for (int i = 0; i < taille; i++)
    {
        somme += tab[i];
    }
    Moyenne = (float)somme / taille;
    printf("%.2f", Moyenne);
}