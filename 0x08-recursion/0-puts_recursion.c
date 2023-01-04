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

void _puts_recursion(char *s)
{
int i = 0;
if (*s == '\0')
{
_putchar(10);
return;
}
_putchar(*s);
_puts_recursion(s + 1);

}
