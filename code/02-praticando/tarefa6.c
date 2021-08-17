// Configurações do mutirão. Não mexer.
#include "../macros_correcoes.h"
#define LABNUM "lab2-"
#define SOLUTIONFILE "tarefa6.c"

#include <stdio.h>

int main()
{
    // TODO implemente seu programa aqui
    int n;

    printf("Digite um número: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        if (i % 3 == 0 && i % 5 == 0)
        {
            printf("%d: Por três e por cinco\n", i);
        }
        else if (i % 3 == 0 && i % 5 != 0)
        {
            printf("%d: Apenas por três\n", i);
        }
        else if (i % 3 != 0 && i % 5 == 0)
        {
            printf("%d: Apenas por cinco\n", i);
        }
        else
        {
            printf("%d: Nenhum\n", i);
        }
    }

// Configurações do mutirão. Não mexer.
#include "../telemetry.c"

    return 0;
}