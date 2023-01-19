#include <stdarg.h>
#include <string.h>
#include <stdio.h>

/**
*print_all - Entry point to var function
*@format: number of arguments passed
*Return: void
*/

void print_all(const char * const format, ...)
{
int i = 0;
int length = strlen(format);
char *s;
va_list args;

va_start(args, format);

while (format[i] != '\0')
{
switch (format[i])
{
case 'c':
printf("%c", va_arg(args, int));
break;

case 'i':
printf("%d", va_arg(args, int));
break;

case 'f':
printf("%lf", va_arg(args, double));
break;

case 's':
s = va_arg(args, char*);
if (s == NULL)
s = "(nil)";
printf("%s", s);
break;

default:
break;
}
if ((i < length - 1) && format[i] != 'c')
printf(", ");
i++;
}

printf("\n");
}
