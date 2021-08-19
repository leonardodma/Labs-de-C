/*
 * Escreva seu programa aqui!
 */
#include <stdio.h>

void sum_sub(int lado1, int lado2, int *pa, int *pc)
{
    *pa = lado1 * lado2;
    *pc = lado1*2 + lado2*2;
}

int main()
{
    int num1, num2;
    printf("Digite o lado de um retângulo: \n");
    scanf("%d", &num1);
    printf("Digite o segundo desse retângulo: \n");
    scanf("%d", &num2);

    int area = 0;
    int comprimento = 0;
    sum_sub(num1, num2, &area, &comprimento);
    printf("Área %d, Perímetro %d\n", area, comprimento);

    return 0;
}