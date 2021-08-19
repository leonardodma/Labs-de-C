#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char string[30];
    printf("Digite uma palavra: \n");
    scanf("%s", &string);

    int lenString = strlen(string);
    printf("Tamanho string: %d\n", lenString);
    char upper[lenString];


    for (int i = 0; i < lenString; i++)
    {
        if (string[i] != '\0')
        {
            upper[i] = toupper(string[i]);
        }
    }

    int lenUpper = strlen(upper);
    printf("Tamanho string: %d\n", lenUpper);

    int *n = &upper[0];

    printf("%s\n", n);

    return 0;
}
