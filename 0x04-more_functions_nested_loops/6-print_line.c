#include "main.h"

/**
* print_line - This function prints line
*
* Return: 0
*
*@n: This accepts integer value
*/

void print_line(int n)
{
int i;
for (i = 1; i <= n; i++)
{
if (n <= 0)
{
_putchar(10);
}
_putchar(95);
}
_putchar(10);
}
