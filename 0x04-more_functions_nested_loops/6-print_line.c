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
}
_putchar('\n');
}
