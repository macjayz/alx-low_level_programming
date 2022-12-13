#include "main.h"
/**
*print_alphabet - Entry point
*
*Return: Always 0 (Success)
*/
void print_alphabet(void)
{
int i;
int col;
for (col = 0; col <= 9; col++)
{
for (i = 'a'; i <= 'z'; i++)
{
_putchar(i);
}
_putchar('\n');
}
}
