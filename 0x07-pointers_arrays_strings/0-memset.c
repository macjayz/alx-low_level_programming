#include "main.h"
#include <stdio.h>
#include <string.h>

/**
*_memset - This function prints a string
*
*Return: 0
*@s: This accepts char argument
*@b: This accepts char argument
*@n: This accepts int argument
*/
char *_memset(char *s, char b, unsigned int n)
{
int i;

for (i = 0; i < n; i++)
{
*(s + i) = b;
}

s[i] = '\0';
return (s);
}
