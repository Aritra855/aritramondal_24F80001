#include <stdio.h>

int gcd(int a, int b)
{
  if (a > b) {
    a -= b;
    gcd(a, b);
  } else if (a < b) {
    b -= a;
    gcd(a, b);
  } else {
    return a;
  }
}

int main(void)
{
  int a = 0;
  int b = 0;

  printf("Enter two numbers: ");
  scanf("%d %d", &a, &b);
  
  printf("gcd of %d, %d is %d\n", a, b, gcd(a, b));  
  return 0;
}
