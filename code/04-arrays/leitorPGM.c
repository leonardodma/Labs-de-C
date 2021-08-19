#include <stdio.h>

int main()
{
    char linha[100];
    int W;

    // header
    fgets(linha, 100, stdin);
    printf(linha);

    // W
    scanf("%d", &W);
    printf("W: %d \n", W);

    return 0;
}

