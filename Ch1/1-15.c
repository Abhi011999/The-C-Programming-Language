#include <stdio.h>

/* print Fahrenheit-Celsius table for fahr = 0, 20, ..., 300;
   floating-point version

   function variant */

main()
{
  printf("fahr\t celsius\n");

  convert(0, 300, 20, 0);
}

void convert(int lower, int upper, int step, float fahr)
{
  float celsius = 0;
  fahr = lower;

  while (fahr <= upper) {
    celsius = (5.0/9.0) * (fahr-32.0);
    printf("%3.0f %10.1f\n", fahr, celsius);
    fahr = fahr + step;
  }
}