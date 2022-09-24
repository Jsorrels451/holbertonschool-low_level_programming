#include "main.h"
/**
* main - Entry point
* _isupper -  A function that checks for uppercase characters.
* @c: An input character.
* Return: 1 If character is uppercase.
*/
int main(void)
{
char c;
if (c >= 'A' && c <= 'Z')
return (1);
if (c >= 'a' && c <= 'z')
return (0);
}
