#include <stdio.h>

int main(void)
{
  float mark1 = 0;
  float mark2 = 0;
  float mark3 = 0;

  float avg = 0;

  printf("Enter first score: ");
  scanf("%f", &mark1);

  printf("Enter second score: ");
  scanf("%f", &mark2);

  printf("Enter third score: ");
  scanf("%f", &mark3);

  avg = (mark1 + mark2 + mark3) / 3;
  printf("The average score is %0.2f\n", avg);

  if (avg >= 60) {
    printf("Pass\n");
  } else {
    printf("Fail\n");
  }
  
  return 0;
}
