#include <stdarg.h>
#include <stdio.h>

/**
*print_strings - Entry point to var function
*@n: number of arguments passed
*@separator: separates integers
*Return: void
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
char *s;
va_list args;

va_start(args, n);

for (i = 0; i < n; i++)
{
s = va_arg(args, char*);
if (s == NULL)
s = "(nil)";

printf("%s", s);
if ((i < n - 1) && (separator != NULL))
printf("%s", separator);
}
printf("\n");
}
