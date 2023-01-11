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
strncat(dest, src, n);
return (dest);

}
