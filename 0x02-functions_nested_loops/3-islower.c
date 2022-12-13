#include "main.h"
/**
*main - Entry point
*
*Return: Always 0 (Success)
*/
int main(void)
{
int result = _islower('c');
_putchar(result + '0');
_putchar('\n');
return (0);
}

int _islower(int c)
{
int i= 'a';
while (i <= 'z')
{
if (c != i)
{
i++;
}
else
{
return 1;
}
}
return (0);
}

