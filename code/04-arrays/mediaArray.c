#include <stdio.h>

int main(int argc, char *argv[])
{   
    long a[30];

    for (int i = 0; i < 30; i++)
    {
        scanf("%ld", &a[i]);
    }

    float soma = 0.0;
    for (int i = 0; i < 30; i++)
    {
        soma += a[i];
    }

    float media = soma/30;
    printf("Média: %f\n", media);
    float somatorio = 0;

    for (int i = 0; i < 30; i++)
    {
        somatorio += (a[i] - media) * (a[i] - media);
    }

    float variancia = somatorio/(30-1);
    printf("Variância: %f\n", media);

    return 0;
}