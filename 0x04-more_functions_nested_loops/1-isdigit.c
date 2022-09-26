#include "main.h"
/**
* _isdigit - A function that checks for a digit 0 - 9
* @c: An input character
* Return: 1 if character is a digit.
*/
int _isdigit(int c)
{
if (c >= '0' && c <= '9')
return (1);
else
return (0);
}
