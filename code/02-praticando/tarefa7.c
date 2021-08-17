// Configurações do mutirão. Não mexer.
#include "../macros_correcoes.h"
#define LABNUM "lab2-"
#define SOLUTIONFILE "tarefa7.c"

#include <stdio.h>

int main()
{

    // TODO implemente seu programa aqui
    int n;

    printf("Digite um número: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j < n - i)
            {
                printf(" ");
            }
            else
            {
                printf("/");
            }
        }

        printf("|");

        for (int j = 0; j < n; j++)
        {
            if (j < i)
            {
                printf("\\");
            }
            else
            {
                printf(" ");
            }
        }

        printf("\n");
    }

// Configurações do mutirão. Não mexer.
#include "../telemetry.c"

    return 0;
}