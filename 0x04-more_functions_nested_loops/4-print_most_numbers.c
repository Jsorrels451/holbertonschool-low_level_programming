#include "main.h"
/**
* print_most_numbers - prints all numbers but 2 and 4
*
* Return: Always 0
*/
void print_most_numbers(void)
{
int n;
for (; n <= '9'; n++)
{
  if (n != '0' && n != '9')
_putchar(n);
}
_putchar('\n');
}
