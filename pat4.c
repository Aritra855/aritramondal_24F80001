#include <stdio.h>

int main(void)
{
  int n = 0;
  printf("Enter depth of the pyramid: ");
  scanf("%d", &n);
  for (int i = 1; i <= n; ++i){
    for (int j = 0; j < n - i; ++j)
      printf(" ");
    for (int k = 1; k <= i; ++k)
      printf("*");
    printf("\n");
  }
  
  return 0;
}
