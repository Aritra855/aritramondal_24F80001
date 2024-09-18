#include <stdio.h>

int main(void)
{
  int a = 0;
  int b = 0;

  printf("Enter first number: ");
  scanf("%d", &a);

  printf("Enter second number: ");
  scanf("%d", &b);

  int sum = a + b;
  printf("Sum of %d and %d is %d\n", a, b, sum);
  
  return 0;
}
