#include <stdio.h>
#include <string.h>

int palindrome(char string[20])
{

    int length = strlen(string);
    int palindrome = 1;

    for (int i = 0; i < length; i++)
    {
        if (string[i] != string[length - i - 1])
        {
            palindrome = 0;
            break;
        }
    }

    if (palindrome == 0)
    {
        printf("%s is not a palindrome\n", string);
        return 0;
    }
    else
    {
        printf("%s is a palindrome\n", string);
        return 1;
    }
}

int main()
{
    char string1[20];
    printf("Enter a string:");
    scanf("%s", string1);

    int boolean = palindrome(string1);

    return 0;
}