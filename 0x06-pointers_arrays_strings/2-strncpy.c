#include "main.h"
#include <stdio.h>
#include <string.h>

/**
* _strncpy - This function prints a string
*
*Return: 0
*@dest: This accepts char argument
*@src: This accepts char argument
*@n: This accepts int argument
*/

char *_strncpy(char *dest, char *src, int n)
{
int i;

for (i = 0; src[i] != '\0'; i++)
{

*(dest + i) = *(src + i);
}

for (; i < n; i++)
dest[i] = '\0';

return (dest);
}
