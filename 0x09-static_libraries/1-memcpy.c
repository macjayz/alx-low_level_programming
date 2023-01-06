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
unsigned int i;

for (i = 0; i < n; i++)
{
*(dest + i) = *(src + i);
}

return (dest);
}
