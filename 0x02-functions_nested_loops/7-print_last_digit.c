#include "main.h"
/**
*print_last_digit - This function prints the last digit of a number
*
*Return: Always 0 (Success)
*
*@n: This variable receives a value from the main.c
*/
int print_last_digit(int n)
{
int ans;
if (n < 0)
n *= -1;

ans = n % 10;

return (ans);

}
