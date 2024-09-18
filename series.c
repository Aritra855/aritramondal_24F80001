#include <stdio.h>

int main(void)
{
  float s = 0;
  float x = 0;

  printf("Enter x: ");
  scanf("%f", &x);

  printf("The sum of the series S =");
  
  for (int i = 1; i <= 10; ++i) {
    s += x / i;
    printf(" %f / %d %s ",
	   x, i,
	   i == 10 ? "" : "+"
	   );
  }
  printf("= %f\n", s);
}
