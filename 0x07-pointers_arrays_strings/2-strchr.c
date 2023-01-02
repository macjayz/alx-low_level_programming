#include "main.h"
#include <stdio.h>
#include <string.h>

/**
*_strchr- This function prints a string
*
*Return: 0
*@s: This accepts char argument
*@c: This accepts char argument
*/

char *_strchr(char *s, char c)
{
unsigned int i;

for (i = 0; s[i] != '\0'; i++)
{
if (s[i] == c)
return (s + i);
}
if (s[i] == c)
return (s + i);

return ('\0');
}
