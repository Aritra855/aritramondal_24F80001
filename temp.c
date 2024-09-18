#include <stdio.h>

int main(void)
{
  float c_temp = 0;
  float f_temp = 0;
  
  printf("Enter a temperature in Celsius to convert to Fahrenheit: ");
  scanf("%f", &c_temp);

  f_temp = (1.8 * c_temp) + 32;
  printf("The temperature %.2f C in Fahrenheit is %.2f F\n", c_temp, f_temp);
  
  return 0;
}
