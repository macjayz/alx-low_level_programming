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
int n;
for (n = 0; n <= 9; n++)
{
putchar(n + '0');
if (n == 9)
continue;
putchar(',');
}
putchar('\n');
return (0);
}
