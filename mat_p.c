#include <stdio.h>

int main(void)
{
  int mat1[3][3] = {0};
  int mat2[3][3] = {0};
  int p_mat[3][3] = {0};
  
  for (int i = 0; i < 3; ++i)
    for (int j = 0; j < 3; ++j) {
      printf("Enter element (%d, %d) of matrix 1: ", i + 1, j + 1);
      scanf("%d", &mat1[i][j]);
    }

  for (int i = 0; i < 3; ++i)
    for (int j = 0; j < 3; ++j) {
      printf("Enter element (%d, %d) of matrix 2: ", i + 1, j + 1);
      scanf("%d", &mat2[i][j]);
    }
  
  for (int i = 0; i < 3; ++i)
    for (int j = 0; j < 3; ++j)
      for (int k = 0; k < 3; ++k)
	p_mat[i][j] += mat1[i][k] * mat2[k][j];

  for (int i = 0; i < 3; ++i) {
    printf("[ ");
    for (int j = 0; j < 3; ++j)
      printf("%d ", p_mat[i][j]);
    printf("]\n");
  }
  
  return 0;
}
