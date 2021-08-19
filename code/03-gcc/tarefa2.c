#include <stdio.h>


void determinaMultiplicidade(int n1, int n2){
  if (n1%n2 == 0)
  {
    printf("\nO número %d é divisível por %d \n", n1, n2);
  }
  else
  {
    printf("\nO número %d não é divisível por %d \n", n1, n2);
  }
}

int main(int argc, char *argv[]) {
  int num1;
  int num2;

  while (num1 != 0 && num2 != 0) 
  {
    printf("Digite um número: ");
    scanf("%d", &num1);

    printf("\nDigite um segundo número: ");
    scanf("%d", &num2);

    if (num1 != 0)
    {
        while (num2 == 0)
        {
            printf("A divisão não pode ser por zero... Digite outro número: \n");
            scanf("%d", &num2);
        }
    }
    
    if (num1 != 0 && num2 != 0)
    {
        determinaMultiplicidade(num1, num2);
    }
    
    printf("\n");
  }

  printf("FIM\n");
  
  return 0;
}
