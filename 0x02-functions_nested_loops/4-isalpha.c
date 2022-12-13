#include "main.h"
/**
*main - Entry point
*
*Return: Always 0 (Success)
*/
int main(void)
{
int result = _isalpha('k');
_putchar(result + '0');
_putchar('\n');
return (0);
}

int _isalpha(int c)
{
int lower = 'a';
int upper = 'A';
while (lower <= 'z')
{
while (upper <= 'Z')
{
if (c != upper)
{
upper++;
}
else
{
return 1;
}
}
if (c != lower)
{
lower++;
}
else
{
return 1;
}
}
return (0);
}

