#include "main.h"
#include <stdio.h>
#include <string.h>

/**
* _strcat - This function prints a string
*
*Return: 0
*@dest: This accepts char argument
*@src: This accepts char argument
*/
char *_strcat(char *dest, char *src)
{
int i;
int j;

for (i = 0; dest[i] != '\0'; i++)
{
dest[i];
}

for (j = 0; src[j] != '\0'; j++, i++)
{
*(dest + i) = *(src + j);
}
return (dest);
}
