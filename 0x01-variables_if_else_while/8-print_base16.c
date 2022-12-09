#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
*main - Entry point
*
*Return: Always 0 (Success)
*/
int main(void)
{
int num;
int hex;
for (num = 0; num <= 9; num++)
{
putchar((num) + '0');
}
for (hex = 'a'; hex <= 'f'; hex++)
{
putchar(hex);
}
putchar('\n');
return (0);
}
