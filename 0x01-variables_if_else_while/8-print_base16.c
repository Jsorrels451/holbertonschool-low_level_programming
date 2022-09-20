#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (success)
*/
int main(void)
{
int num;
int h;
for (num = 0; num < 9; num++)
putchar(num);
for (h = 'a'; h <= 'f'; h++)
putchar(h);
putchar('\n');
return (0);
}
