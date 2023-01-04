#include "main.h"
#include <stdio.h>
#include <string.h>

/**
* _puts_recursion - This function prints a string
*
*Return: 0
*@s: This accepts char argument
*/

void _puts_recursion(char *s)
{
if (*s == '\0')
{
_putchar(10);
return;
}
_putchar(*s);
_puts_recursion(s + 1);

}
