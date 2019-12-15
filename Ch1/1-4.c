#include <stdio.h>

/* print Celsius-Fahrenhiet table for celsius = 0, 20, ..., 300;
   floating-point version */

main()
{
  float fahr, celsius;
  int lower, upper, step;

  lower = 0;        /* lower limit of temperature table */
  upper = 300;      /* upper limit */
  step = 20;        /* step size */

  printf("celsius\t fahr\n"); /* print a heading above the table */

  celsius = lower;
  while (celsius <= upper) {
    fahr = (celsius * (9.0/5.0)) + 32;
    printf("%3.0f %9.1f\n", celsius, fahr);
    celsius = celsius + step;
  }
}
