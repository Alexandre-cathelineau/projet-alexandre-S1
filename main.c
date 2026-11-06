#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    srand(time(NULL));
    int random_number = rand() % 100 + 1;

    int nombre;

    while (random_number != nombre)
    {
        printf("proposez un nombre entre 1 et 100: ");
        scanf("%d", &nombre);

        if ( random_number > nombre )
        {
            printf("le nombre mystere est plus grand\n\n");
        }
        else if ( random_number < nombre )
        {
            printf("le nombre mystere est plus petit\n\n");
        }
        else
        {
            printf("Bravo !!! vous avez trouver le nombre mystere etais %d\n\n", random_number);
        }
    }

    return 0;
}