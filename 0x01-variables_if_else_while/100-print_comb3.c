#include <stdio.h>
/**
*main - Entry point
*
*Return: Always 0 (Success)
*/
int main(void)
{
for (int i = 0; i <= 9; i++)
{
	for (int j = 0; j <= 9; j++)
	{
	putchar(i + '0');
	putchar(j + '0');
	if (i == 9 && j == 9)
	continue;
	putchar(',');
	}
	putchar('\n');
}
return (0);
}
