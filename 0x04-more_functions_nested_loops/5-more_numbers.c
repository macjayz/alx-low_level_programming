#include "main.h"

/**
*more_numbers - This print numbers from 0 to 14 10 times
*
*Return: 0
*
*/

void more_numbers(void)
{
int i;
int j;

for (i = 0; i < 10; i++)
{
for (j = 0; j <= 14; j++)
{
if (j > 9)
{
_putchar('1');
}
_putchar((j % 10) + '0');
}
_putchar('\n');
}
}
