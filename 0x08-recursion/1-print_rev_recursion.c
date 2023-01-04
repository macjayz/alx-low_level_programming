#include "main.h"
#include <stdio.h>
#include <string.h>

/**
*_print_rev_recursion - This function prints a string
*
*Return: 0
*@s: This accepts char argument
*/

void _print_rev_recursion(char *s)
{
if (s[0] == '\0')
{
return;
}
_print_rev_recursion(s + 1);
_putchar(*s);

}
