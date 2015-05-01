#include <stdio.h>
#include "sub/pow.h"

int sum(int a, int b);

int main(int argc, char* argv[])
{
  int sum_xy;
  if(argv[1]!=NULL && argv[2]!=NULL)
  {
    sum_xy = sum(atoi(argv[1]),atoi(argv[2]));
    printf("The sum of %d and %d is %d\n",atoi(argv[1]),atoi(argv[2]),sum_xy);
    printf("%d^%d = %d\n",atoi(argv[1]),atoi(argv[2]),spow(atoi(argv[1]),atoi(argv[2])));
  }
}

/**
 * sum(int a, int b) - Sums two numbers together
 *
 * Adds two numbers together, assumes both are positive integer
 * numbers who's sum is less than or equal to 2^32;
 *
 * @param  int a - first integer value to be added
 * @param  int b - second integer value to be added
 * @return returns the sum of a and b
 */
int sum(int a, int b)
{
  return a + b;
}
