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
int length = strlen(str);
for (i = length - 1; str[i] >= 0; i--)
{
_putchar(str[i]);

}
_putchar(10);
}
