#include <stdio.h>

int main(void)
{
  int arr[20] = {0};
  int sum = 0;
  int search_num = 0;
  
  for (int i = 0; i < 20; ++i) {
    printf("Enter number %d: ", i + 1);
    scanf("%d", &arr[i]);
  }

  printf("Enter a number to search: ");
  scanf("%d", &search_num);

  for (int i = 0; i < 20; ++i)
    if (search_num == arr[i]) {
      printf("The number %d exists in the array\n", search_num);
      return 0;
    }

  printf("The number %d does not exist in the array\n", search_num);
  return 0;
}
