#include "main.h"
/**
*print_to_98 - This function prints all natural numbers fro n to 98
*
*Return: Always 0 (Success)
*
*@n: This accepts natural numbers
*/
void print_to_98(int n)
{
if (n < 98)
{
while (n < 98)
{
printf("%d, ", n);
n++;
}
}
else if (n > 98)
{
while (n > 98)
{
printf("%d, ", n);
n--;
}
}
printf("98\n");
}
