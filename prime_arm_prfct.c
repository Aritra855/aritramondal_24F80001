#include <stdio.h>

int power(int n, int p)
{
  int ret = 1 ;
  for (int i = 0; i < p; ++i)
    ret *= n;
  return ret;
}
  
int prime(int num)
{
  for (int i = 2; i <= num / 2; ++i) {
    if (num % i == 0)
      return 0;
  }
  return 1;
}

int arm(int num)
{
  int oldnum = 0;
  int tmp = 0;
  int p_sum = 0;
  int sz = 0;

  oldnum = num;
  while (num > 0) {
    tmp = num % 10;
    num /= 10;
    ++sz;
  }

  num = oldnum;
  while (num > 0) {
    tmp = num % 10;
    num /= 10;
    p_sum += power(tmp, sz);
  }

  if (p_sum == oldnum)
    return 1;
  return 0;
}

int prfct(int num)
{
  int fct_sum = 0;
  for (int i = 1; i <= num / 2; ++i)
    if (num % i == 0)
      fct_sum += i;

  if (fct_sum == num)
    return 1;
  return 0;
}

int main(void)
{
  int num = 0;
  printf("Enter a number to check: ");
  scanf("%d", &num);

  if (prime(num))
    printf("%d is a prime\n", num);
  if (arm(num))
    printf("%d is an armstrong number\n", num);
  if (prfct(num))
    printf("%d is an perfect number\n", num);
  
  return 0;
}
