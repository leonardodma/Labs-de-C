/*
 * Escreva seu programa aqui!
 */
#include <stdio.h>

void sum_sub(int a, int b, int *psum, int *psub)
{
    *psum = a + b;
    *psub = a - b;
}

int main()
{
    int num1, num2;
    printf("Digite um número: \n");
    scanf("%d", &num1);
    printf("Digite um segundo número: \n");
    scanf("%d", &num2);

    int sum = 0;
    int sub = 0;
    sum_sub(num1, num2, &sum, &sub);
    printf("Soma %d, Subtração %d\n", sum, sub);

    return 0;
}