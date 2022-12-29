#include "main.h"
#include <stdio.h>
#include <string.h>

/**
* _strncat - This function prints a string
*
*Return: 0
*@dest: This accepts char argument
*@src: This accepts char argument
*@n: This accepts int argument
*/
char *_strncat(char *dest, char *src, int n)
{
int i;
int j;
int len = strlen(src);


for (i = 0; dest[i] != '\0'; i++)
{
dest[i];
}

for (j = 0; j < n &&  src[j] != '\0'; j++)
{

dest[i + j] = *(src + j);
}
dest[i + j] = '\0';

return (dest);
}
