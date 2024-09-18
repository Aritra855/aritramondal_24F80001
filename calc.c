#include <stdio.h>

int main(void)
{
  int num1 = 0;
  int num2 = 0;
  char op;
  
  printf("Enter the first number: ");
  scanf("%d", &num1);

  printf("Enter the second number: ");
  scanf("%d", &num2);

  printf("Enter the operator: ");
  scanf(" %c", &op);
  
  /* switch (op) { */
  /* case '+': */
  /*   printf("%d %c %d = %d", num1, op, num2, num1 + num2); */
  /*   break; */
    
  /* case '-': */
  /*   printf("%d %c %d = %d", num1, op, num2, num1 - num2); */
  /*   break; */

  /* case '*': */
  /*   printf("%d %c %d = %d", num1, op, num2, num1 * num2); */
  /*   break; */

  /* case '/': */
  /*   printf("%d %c %d = %d", num1, op, num2, num1 / num2); */
  /*   break; */

  /* case '%': */
  /*   printf("%d %c %d = %d", num1, op, num2, num1 % num2); */
  /*   break; */

  /* default: */
  /*   printf("Invalid expression %c", op); */
  /*   break; */
  /* } */

  if (op == '+') {
    printf("%d %c %d = %d", num1, op, num2, num1 + num2);
  } else if (op == '-') {
    printf("%d %c %d = %d", num1, op, num2, num1 - num2);
  } else if (op =='*') {
    printf("%d %c %d = %d", num1, op, num2, num1 * num2);
  } else if (op == '/') {
    printf("%d %c %d = %d", num1, op, num2, num1 / num2);
  } else if (op == '%') {
    printf("%d %c %d = %d", num1, op, num2, num1 % num2);
  } else {
    printf("Invalid expression %c", op);
  }

  printf("\n");
  return 0;
}
