#include <stdio.h>
#include <stdlib.h>

void main()
{
    // Chiedo quanti numeri
    int n;
    printf("Quanti numeri vuoi? ");
    scanf("%d", n);

    // Creo n aree di memoria
    int *p = malloc(n * sizeof(int));
    if (p == NULL)
    {
        printf("Errore di memoria");
        exit(EXIT_FAILURE);
    }

    printf("\n");

    for (int i = 0; i < n; i++)
    {
        printf("Inserisci il n.%d: ", i);
        scanf("%d", p + i);
    }

    free(p);
    p = NULL;
}