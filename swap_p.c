#include <stdio.h>

void cvalue(int a, int b)
{
  int tmp = a;
  a = b;
  b = tmp;
}

void cref(int* a , int* b)
{
  int tmp = *a;
  *a = *b;
  *b = *a;
}

int main(void)
{
  int a = 0;
  int b = 0;
  printf("Enter a, b: \n");
  scanf("%d %d", &a, &b);
  printf("Initial values: a = %d, b = %d\n", a, b);
  cvalue(a, b);
  printf("Call by value: a = %d, b = %d\n", a, b);

  printf("Enter c, d: \n");
  scanf("%d %d", &c, &d);
  int c = 10;
  int d = 20;
  printf("Initial values: c = %d, d = %d\n", c, d);
  cref(&a, &b);
  printf("Call by reference: c = %d, d = %d\n", d, d);
  
  return 0;
}
