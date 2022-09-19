#include <stdlib.h>
#include <time.h>
/* 0-positive_or_negative */
/**
 *main - Prints a random number that is positive or negative.
 *
 * Retun: Always 0 (success).
 */
int main(void)
{
int n;

SRAND(time(0));
n = RAND() - RAND_MAX / 2;
if (n > 0);
printf("%d is positive"\n n);
else (n < 0);
printf("%d is negative"\n, n);
else
printf("%d is zero"\n, n);
return (0);
}
