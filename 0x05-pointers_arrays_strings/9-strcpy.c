#include "main.h"
#include <stdio.h>
#include <string.h>


/**
* _strcpy - This copies string
*
* Return: Always 0.
*@src: This accepts pointer a argument
*@dest: This accepts pointer argument
*/

char *_strcpy(char *dest, char *src)
{
int i;
int length = strlen(src);
for (i = 0; i < length; i++)
{
*(dest + i) = *(src + i);
}
*(dest + i) = '\0';
return (dest);
}


