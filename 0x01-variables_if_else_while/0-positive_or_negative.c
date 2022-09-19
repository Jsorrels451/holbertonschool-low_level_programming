#inculde <stdlib.h>
#include <time.h>
/* 0-positive_or_negative */
/**
 * main - To determine is a random number is positive or negative
 *
 * Retun: Always 0
 */
int main(void)
{
  int n;

  srand(time(0));
  n = rand() - RAND_MAX / 2;
  if (n > 0)
    printf("%d is positive"\n, n);
  else
    printf("%d is negative"\n, n);
  else
    printf("%d is zero"\n, n);
  return (0);
}
