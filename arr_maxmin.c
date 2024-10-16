#include <stdio.h>

int main(void)
{
  int arr[10] = {0};
  int max = 0;
  int min = 0;
  
  for (int i = 0; i < 10; ++i) {
    printf("Enter number %d: ", i + 1);
    scanf("%d", &arr[i]);
  }

  for (int i = 0; i < 10; ++i) {
    if (max < arr[i] || i == 0)
      max = arr[i];
    if (min > arr[i] || i == 0)
      min = arr[i];
  }
  
  printf("Maximum = %d, Minimum = %d\n", max, min);
  
  return 0;
}
