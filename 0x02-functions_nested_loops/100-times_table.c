#include "main.h"
/**
*print_times_table - This function print the 9 times table
*
*Return: Always 0 (Success)
*/
void print_times_table(int n)
{
int x, y, z;

for (x = 0; x <= 9; x++)
{
for (y = 0; y <= 9; y++)
{
z = x * y;
if (z > 99)
{
_putchar(',');
_putchar(32);
_putchar((z / 100) + '0');
_putchar(((z / 10) % 10) + '0');
_putchar((z % 10) + '0');
}
else if (z > 9)
{
_putchar(',');
_putchar(32);
_putchar(32);
_putchar(((z / 10) % 10) + '0');
_putchar((z % 10) + '0');
}
else
{
if (y != 0)
{
_putchar(',');
_putchar(32);
_putchar(32);
_putchar(32);
}
_putchar(z + '0');
}
_putchar('\n');
}
}
}
