#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define CONTACT_MAX 100

typedef struct
{

    char Name[50];
    char Telephone[20];
    char Email[50];

} Contacts;

Contacts contacts[CONTACT_MAX];
int count = 0;

void AjouterContact()
{

    char input[10];

    while (count < CONTACT_MAX)
    {
        printf("\n Saisie Stop pour arreter ou Continue pour continuer : \n");
        fgets(input, sizeof(input), stdin);
        input[strcspn(input, "\n")] = '\0';

        if (strcmp(input, "stop") == 0)
        {
            break;
        }

        printf("Nom: ");
        fgets(contacts[count].Name, sizeof(contacts[count].Name), stdin);

        printf("Téléphone: ");
        fgets(contacts[count].Telephone, sizeof(contacts[count].Telephone), stdin);

        printf("Email: ");
        fgets(contacts[count].Email, sizeof(contacts[count].Email), stdin);

        count++;
    }
}

void AfficherContact()
{
    for (int i = 0; i < count; i++)
    {
        printf("%d.  \n", i + 1);
        printf("Nom       : %s\n", contacts[i].Name);
        printf("Téléphone : %s\n", contacts[i].Telephone);
        printf("Email     : %s\n", contacts[i].Email);
    }
}

void SearchContact()
{

    char nom[100];
    int trouve = 0;

    printf("Entrez le nom à rechercher : ");
    fgets(nom, sizeof(nom), stdin);
    nom[strcspn(nom, "\n")] = '\0';

    for (int i = 0; i < count; i++)
    {
        if (strcasecmp(nom, contacts[i].Name) == 0)
        {
            printf("Nom       : %s\n", contacts[i].Name);
            printf("Telephone : %s\n", contacts[i].Telephone);
            printf("Email     : %s\n", contacts[i].Email);
            trouve = 1;
            break;
        }
    }

    if (!trouve)
    {
        printf("il nexiste pas");
    }
}

void ModifierContact()
{

    char nom[100];
    int trouve = 0;

    printf("Entrez le nom à rechercher : ");
    fgets(nom, sizeof(nom), stdin);
    nom[strcspn(nom, "\n")] = '\0';

    for (int i = 0; i < count; i++)
    {
        if (strcmp(nom, contacts[i].Name) == 0)
        {

            char newTele[100];
            char newEmail[100];

            printf("Entrez le nouvelle numero de telephone :");
            fgets(newTele, sizeof(newTele), stdin);
            newTele[strcspn(newTele, "\n")] = '\0';
            strcpy(contacts[i].Telephone, newTele);

            printf("Entrez le nouvelle Email :");
            fgets(newEmail, sizeof(newEmail), stdin);
            newEmail[strcspn(newEmail, "\n")] = '\0';
            strcpy(contacts[i].Email, newEmail);

            trouve = 1;

            break;
        }
    }

    if (!trouve)
    {
        printf("il nexiste pas");
    }
}

void Supprimezcontact()
{

    char nom[100];
    int trouve = 0;
    printf("Entrez le nom à rechercher : ");
    fgets(nom, sizeof(nom), stdin);
    nom[strcspn(nom, "\n")] = '\0';

    for (int i = 0; i < count; i++)
    {
        if (strcmp(nom, contacts[i].Name) == 0)
        {
            for (int j = i; i < count; j++)
            {
                contacts[j] = contacts[j + 1];
            }
            trouve = 1;
            break;
        }
        count--;
    }

    if (!trouve)
    {
        printf("il nexiste pas");
    }
}

int main()
{

    Contacts contact;

    int choix;
    do
    {

        printf("1.Ajouter un Contact\n2. Modifier un Contact\n3. Supprimer un Contact\n4.Afficher Tous les Contacts\n5. Rechercher un Contact\n");
        printf("Entrez Votre choix :");
        scanf("%d", &choix);
        getchar();
        switch (choix)
        {
        case 1:
            AjouterContact();
            printf("\n\n");
            break;
        case 2:
            printf("\n\n");
            ModifierContact();
            printf("\n\n");
            break;
        case 3:
            printf("\n\n");
            getchar();
            Supprimezcontact();
            printf("\n\n");
            break;
        case 4:
            printf("\n\n");
            SearchContact();
            printf("\n\n");
            break;
        case 5:
            printf("\n\n");
            AfficherContact();
            printf("\n\n");
            break;
        case 6:
            printf("fin  !");
            return 0;
        default:
            printf("respectez le menu ");
            break;
        }

    } while (choix != 0);
}
