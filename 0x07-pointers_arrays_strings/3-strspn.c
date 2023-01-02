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

unsigned int _strspn(char *s, char *accept)
{
unsigned int i;
unsigned int j;

for (i = 0; s[i] != '\0'; i++)
{

for (j = 0; accept[j] != s[i]; j++)
{
if (accept[j] == '\0')
return (i);
}

}

return (i);
}
