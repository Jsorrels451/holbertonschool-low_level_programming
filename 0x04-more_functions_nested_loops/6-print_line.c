#include "main.h"
/**
* print_line - Print a straight line.
* @n: An input integer
* Return: Always 0.
*/
void print_line(int n)
{
int i;
if (n > 0)
{
for (; i < n; i++)
_putchar('_');
print_line(0,/n);
print_line(2,/n);
print_line(10,/n);
print_line(-4,/n);
}
_putchar('\n');
}
