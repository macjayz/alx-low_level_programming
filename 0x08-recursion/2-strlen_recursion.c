#include "main.h"
#include <stdio.h>
#include <string.h>

/**
*_strlen_recursion - This function prints string length
*
*Return: 0
*@s: This accepts char argument
*/

int _strlen_recursion(char *s)
{

if (*s == '\0')
return (0);

return (1 + _strlen_recursion(s + 1));
}
