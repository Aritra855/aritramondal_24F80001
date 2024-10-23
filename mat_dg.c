#include <stdio.h>

int main(void)
{
  int mat[3][3] = {0};
  int diag1 = 0;
  int diag2 = 0;
  
  for (int i = 0; i < 3; ++i)
    for (int j = 0; j < 3; ++j) {
      printf("Enter element (%d, %d): ", i + 1, j + 1);
      scanf("%d", &mat[i][j]);
    }

  for (int i = 0; i < 3; ++i)
    for (int j = 0; j < 3; ++j) {
      if (i == j) diag1 += mat[i][j];
      if (j == 2 - i) diag2 += mat[i][j];
    }

  printf("Diagonal 1: %d, Diagonal 2: %d\n", diag1, diag2);

  return 0;
}
