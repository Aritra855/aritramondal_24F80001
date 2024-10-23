#include <stdio.h>

int main(void)
{
  int mat[3][3] = {0};
  int tr_mat[3][3] = {0};
  int is_sym = 1;

  for (int i = 0; i < 3; ++i)
    for (int j = 0; j < 3; ++j) {
      printf("Enter element (%d, %d): ", i + 1, j + 1);
      scanf("%d", &mat[i][j]);
    }
  
  for (int i = 0; i < 3; ++i)
    for (int j = 0; j < 3; ++j)
      tr_mat[j][i] = mat[i][j];

  for (int i = 0; i < 3; ++i) {
    printf("[ ");
    for (int j = 0; j < 3; ++j) {
      printf("%d ", tr_mat[i][j]);

      if (tr_mat[i][j] != mat[i][j])
	is_sym = 0;
    }
    printf("]\n");
  }

  if (is_sym) printf("The matrix is symmetric.\n");
  else printf("The matrix is not symmetric.\n");
  
  return 0;
}
