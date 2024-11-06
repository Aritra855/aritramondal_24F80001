#include <stdio.h>

void sort(int arr[], int sz)
{
  for (int i = 0; i < 10; ++i) {
    printf("Enter number %02d: ", i + 1);
    scanf("%d", &arr[i]);
  }

  for (int i = 0; i < 10; ++i)
    for (int j = 0; j < 9 - i; ++j)
      if (arr[j] > arr[j + 1]) {
	int tmp = arr[j];
	arr[j] = arr[j + 1];
	arr[j + 1] = tmp;
      }
}

int main(void)
{
  int arr[10] = {0};
  int tmp = 0;
  
  sort(arr, 10);

  printf("{");
  for (int i = 0; i < 10; ++ i) {
    printf("%d%s", arr[i], i < 9 ? ", " : " ");
  }
  printf("}\n");
  
  return 0;
}
