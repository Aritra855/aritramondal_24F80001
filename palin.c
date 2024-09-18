#include <stdio.h>

int main(void)
{
  int num = 0;
  int oldnum = 0;
  int revnum = 0;
  int tmp = 0;

  printf("Enter number: ");
  scanf("%d", &num);

  oldnum = num;
  while (num > 0) {
    tmp = num % 10;
    num /= 10;
    revnum = revnum * 10 + tmp;
  }

  printf("%d is %s\n", oldnum,
	 revnum == oldnum ? "a palindrome" : "not a palindrome");
  return 0;
}

