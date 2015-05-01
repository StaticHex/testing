/**
 * An exponent function for c
 *
 * Uses a recursive algorithm to calculate the exponential power
 * of a number
 *
 * @param  int base - The number you wish to multiply x times
 * @param  int exp - The number of times you wish to multiply the base by
 * @return Returns the eponential multiplication of a number ex: 2^3 = 8
 */
int spow(int base, int exp)
{
  if(exp == 0)
    return 1;
  else
    return base*spow(base, exp-1);
}
