#include <stdio.h>

int main(void)
{
  int a = 0;
  int b = 0;

  printf("Enter first number: ");
  scanf("%d", &a);

  printf("Enter second number: ");
  scanf("%d", &b);

  printf("The first number is %d and second one is %d\n", a, b);
  
  int tmp = a;
  a = b;
  b = tmp;

  printf("The first number is now %d and second one is %d\n", a, b);
  
  return 0;
}
