/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* tabulate.c (Chapter 17, page 444) */
/* Tabulates values of trigonometric functions */

#include <math.h>
#include <stdio.h>

void tabulate(double (*f)(double), double first, double last, double incr);

int main(void)
{
  double final, increment, initial;

  printf("Enter initial value: ");
  scanf("%lf", &initial);

  printf("Enter final value: ");
  scanf("%lf", &final);

  printf("Enter increment: ");
  scanf("%lf", &increment);

  printf("\n      x        cos(x)"
         "\n   -------    -------\n");
  tabulate(cos, initial, final, increment);

  printf("\n      x        sin(x)"
         "\n   -------    -------\n");
  tabulate(sin, initial, final, increment);

  printf("\n      x        tan(x)"
         "\n   -------    -------\n");
  tabulate(tan, initial, final, increment);

  return 0;
}

void tabulate(double (*f)(double), double first, double last, double incr)
{
  double x;
  int i, num_intervals;

  num_intervals = ceil((last - first) / incr); // ceil() in <math.h>
  // когда передается арг. с плавающей точкой, то функция возвр. наименьшее целое, которое больше или равно арг.

  for (i = 0; i <= num_intervals; i++) {
    x = first + i * incr;
    printf("%10.5f %10.5f\n", x, (*f)(x));
  }
}


/***

Enter initial value: 3
Enter final value: 7
Enter increment: 1

      x        cos(x)
   -------    -------
   3.00000   -0.98999
   4.00000   -0.65364
   5.00000    0.28366
   6.00000    0.96017
   7.00000    0.75390

      x        sin(x)
   -------    -------
   3.00000    0.14112
   4.00000   -0.75680
   5.00000   -0.95892
   6.00000   -0.27942
   7.00000    0.65699

      x        tan(x)
   -------    -------
   3.00000   -0.14255
   4.00000    1.15782
   5.00000   -3.38052
   6.00000   -0.29101
   7.00000    0.87145



***/
