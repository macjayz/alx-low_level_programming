#include "main.h"

/**
* print_most_numbers - This function prints numbers from 0 to 9
*
*Return: 0
*/

void print_most_numbers(void)
{
int i;
for (i = 0; i <= 9; i++)
{
if (i == 2 || i == 4)
continue;
_putchar(i + '0');
}
_putchar('\n');
}