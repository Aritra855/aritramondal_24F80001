#include <stdio.h>

int main(void)
{
  int mat[4][4] = {0};
  int row[4] = {0};
  int col[4] = {0};
  
  for (int i = 0; i < 4; ++i)
    for (int j = 0; j < 4; ++j) {
      printf("Enter element (%d, %d): ", i + 1, j + 1);
      scanf("%d", &mat[i][j]);
    }

  for (int i = 0; i < 4; ++i)
    for (int j = 0; j < 4; ++j) {
      row[i] += mat[i][j];
      col[i] += mat[j][i];
    }

  for (int i = 0; i < 4; ++i) {
    printf("Row %d: %d\nColumn %d: %d\n", i + 1, row[i], i + 1, col[i]);
  }

  return 0;
}
