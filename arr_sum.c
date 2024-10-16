#include <stdio.h>

int main(void)
{
  int arr[10] = {0};
  int sum = 0;
  
  for (int i = 0; i < 10; ++i) {
    printf("Enter number %d: ", i + 1);
    scanf("%d", &arr[i]);
  }

  for (int i = 0; i < 10; ++i)
    sum += arr[i];
  printf("The sum of the number is %d\n", sum);
  
  return 0;
}
