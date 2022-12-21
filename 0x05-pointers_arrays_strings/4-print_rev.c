#include "main.h"
#include <stdio.h>
#include <string.h>


/**
* print_rev - This print reversed string
*
* Return: Always 0.
*@str: This accepts pointer a argument
*/

void print_rev(char *str)
{
int i;
int length = 0;
while (str[length] != '\0')
length++;

for (i = length - 1; i >= 0; i--)
{
_putchar(str[i]);
}
_putchar(10);
}
