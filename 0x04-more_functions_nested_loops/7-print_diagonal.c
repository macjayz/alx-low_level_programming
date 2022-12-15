#include "main.h"

/**
* print_line - This function prints line
*
* Return: 0
*
*@n: This accepts integer value
*/

void print_diagonal(int n)
{
int i;
int j;
for (i = 1; i <= n; i++)
{
for (j = 1 ; j <= i; j++)
{
_putchar(' ');
}
_putchar(92);
_putchar(10);
}
}
