#include "main.h"
/**
* print_square - This function prints square
*
*Return: 0
*
*@size: This receives integer value
*/

void print_square(int size)
{
int i, j;
for (i = 1; i <= size; i++)
{
for (j = 1; j <= size; j++)
{
_putchar(35);
}
_putchar(10);
}
}
