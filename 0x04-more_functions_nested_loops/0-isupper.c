#include "main.h"
/**
* _isupper - A function that checks for uppercase characters.
* @c: An input character.
* Return: 1 If character is uppercase.
*/
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
return (1);
else
return (0);
}
