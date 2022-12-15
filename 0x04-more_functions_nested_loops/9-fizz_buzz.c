#include "main.h"

/**
*main - main entry
*
*Return: 0
*/

int main(void)
{
int i;
for (i = 1; i <= 100; i++)
{
if ((i % 3) == 0){
putchar('F');
putchar('i');
putchar('z');
putchar('z');
putchar(' ');
}
else if ((i % 5) == 0)
{
putchar('B');
putchar('u');
putchar('z');
putchar('z');
putchar(' ');
}
else if ((i % 3) == 0)
{
putchar('F');
putchar('i');
putchar('z');
putchar('z');
putchar('B');
putchar('u');
putchar('z');
putchar('z');
putchar(' ');
}
else
{
printf("%d ", i);
}
}
printf("\n");
}
