#include <stdio.h>
#include <string.h>

int main(void)
{
  char str[100] = "";
  char revstr[100] = "";
  fgets(str, 100, stdin);
  
  int sz = strlen(str);
  str[--sz] = '\0'; // because fgets also adds a NL
                    // on pressing return on stdin
  for (int i = 0; i < sz; i++)
    revstr[i] = str[sz - i - 1];

  printf("The reverse of \"%s\" is \"%s\"\n", str, revstr);  
  return 0;
}
