#include <stdio.h>

int main()
{
    long matrix[5][4] = {{1, 2, 3, 4},
                         {1, 2, 3, 4},
                         {1, 2, 3, 4},
                         {1, 2, 3, 4},
                         {1, 2, 3, 4}};

    int linha = 5;
    int coluna = 4;

    int idx_maior = 0;
    int maior = 0;

    for (int i = 0; i < coluna; i++)
    {
        int soma = 0;
        for (int j = 0; j < linha; j++)
        {
            soma = soma + matrix[j][i];
        }

        if (soma > maior)
        {
            idx_maior = i;
        }

        printf("Coluna %d: %d\n", i, soma);
    }

    printf("A maior coluna está no índice %d\n", idx_maior);
    printf("\n");

    return 0;
}