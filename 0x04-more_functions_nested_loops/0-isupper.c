#include <ctype.h>
#include "main.h"
/**
* main - Entry point
* _isupper -  A function that checks for uppercase characters.
* @c: An input character.
* Return: 1 If character is uppercase.
*/
int _isupper(int c);
{
char c;
if (c >= 65 && c <= 90)
{
return (1);
}
if (c >= 97 && c <= 122)
{
return (0);
}
}
