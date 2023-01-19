#include <stdarg.h>
#include <stdio.h>

/**
*print_numbers - Entry point to var function
*@n: number of arguments passed
*@separator: separates integers
*Return: void
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list args;

va_start(args, n);

for (i = 0; i < n; i++)
{
printf("%d", va_arg(args, int));
if (i < n - 1)
printf("%s", separator);
}
printf("\n");
}
