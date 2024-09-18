#include <stdio.h>

int main(void)
{
  int num;
  int fct_sum = 0;

  printf("Enter a number: ");
  scanf("%d", &num);
  
  for (int i = 1; i <= num / 2; ++i)
    if (num % i == 0)
      fct_sum += i;

  if (fct_sum == num)
    printf("%d is a perfect number\n", num);
  else
    printf("%d is not a perfect number\n", num);
  
  return 0;
}
