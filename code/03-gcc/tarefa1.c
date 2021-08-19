#include <stdio.h>


void determinaMultiplicidade(int n1, int n2){
  if (n1%n2 == 0)
  {
    printf("O número %d é divisível por %d \n", n1, n2);
  }
  else
  {
    printf("O número %d não é divisível por %d \n", n1, n2);
  }
}

int main(int argc, char *argv[]) {
  int num1;
  int num2;

  printf("Digite um número: ");
  scanf("%d", &num1);

  printf("Digite um segundo número: ");
  scanf("%d", &num2);

  while (num2 == 0)
  {
    printf("A divisão não pode ser por zero... Digite outro número: \n");
    scanf("%d", &num2);
  }

  determinaMultiplicidade(num1, num2);
  
  return 0;
}
