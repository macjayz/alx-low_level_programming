#include "main.h"
#include <stdio.h>
/**
*main - Fibonacci series
*
*Return: Always 0 (Success)
*/
int main(void)
{
unsigned long count, i, j, k, sum;
i = sum = 0;
j = 1;
for (count = 0; count < 50; count++)
{
k = i + j;
i = j;
j = k;
if (k % 2 == 0 && k < 4000000)
{
sum += k;
}
}
printf("%lu\n", sum);
return (0);
}
