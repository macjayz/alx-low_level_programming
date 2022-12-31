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
int length = strlen(dest);

for (i = 0; i < length; i++)
{
;
}

for (j = 0; j < n && src[j] != '\0'; j++, i++)
{
dest[i] = *(src + j);
}
dest[i] = '\0';

return (dest);

}
