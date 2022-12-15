#include "main.h"

/**
*print_triangle - Function prints triangle
*
* Return: 0
*
*@size: This accepts integer arument
*/

void print_triangle(int size)
{
int i, j, k;
if (size <= 0)
_putchar(10);
for (i = 1; i <= size; i++)
{
for (j = size; j >= i; j--)
{
_putchar(' ');
}
for (k = 1; k <= i; k++)
{
_putchar(35);
}
_putchar(10);
}
}
