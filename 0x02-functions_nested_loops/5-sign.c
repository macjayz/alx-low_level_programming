#include "main.h"
/**
*print_sign - This function prints the sign of a number
*
*Return: Always 0 (Success)
*
*@n: This variable receives a value from the main.c
*/
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n < 0)
{
_putchar('-');
return (-1);
}
else
_putchar('0');
return (0);

}
