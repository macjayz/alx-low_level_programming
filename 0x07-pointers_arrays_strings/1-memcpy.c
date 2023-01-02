#include "main.h"
#include <stdio.h>
#include <string.h>

/**
*_memcpy - This function prints a string
*
*Return: 0
*@dest: This accepts char argument
*@src: This accepts char argument
*@n: This accepts int argument
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
int i;
int j;

for (i = 0; dest[i] != '\0'; i++)
{
;
}

for (j = 0; j < n && src[i]; j++, i++)
{
*(dest + i) = *(src + j);
}

dest[i] = '\0';

return (dest);
}