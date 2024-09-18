#include <stdio.h>

int main(void)
{
  int fct = 1;
  int n = 0;

  printf("Enter the value of n: ");
  scanf("%d", &n);

  for (int i = n; i; --i)
    fct *= i;

  printf("The value of %d! is %d\n", n, fct);  
  return 0;
}
