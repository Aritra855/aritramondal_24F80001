#include <stdio.h>

int main(void)
{
  int mat1[5][5] = {0};
  int mat2[5][5] = {0};
  int mat[5][5] = {0};

  for (int i = 0; i < 5; ++i)
    for (int j = 0; j < 5; ++j) {
      printf("Enter element (%d, %d) of matrix 1: ", i + 1, j + 1);
      scanf("%d", &mat1[i][j]);
    }

  for (int i = 0; i < 5; ++i)
    for (int j = 0; j < 5; ++j) {
      printf("Enter element (%d, %d) of matrix 2: ", i + 1, j + 1);
      scanf("%d", &mat2[i][j]);
    }
  
  for (int i = 0; i < 5; ++i)
    for (int j = 0; j < 5; ++j)
      mat[i][j] = mat1[i][j] + mat2[i][j];

  for (int i = 0; i < 5; ++i) {
    printf("[ ");
    for (int j = 0; j < 5; ++j)
      printf("%d ", mat[i][j]);
    printf("]\n");
  }
  
  return 0;
}
