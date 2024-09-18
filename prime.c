#include <stdio.h>

int main(void)
{
  int num = 0;
  int c = 0;
  
  printf("Enter a number: ");
  scanf("%d", &num);

  for (int i = 1; i <= num; ++i)
    if (num % i == 0)
      c += 1;

  printf("%d is %s number\n", num, c == 2 ? "a prime" : "not a prime");
  return 0;
}
