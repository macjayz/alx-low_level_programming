#include "main.h"
#include <stdio.h>
#include <string.h>


/**
* puts_half - This print reversed string
*
* Return: Always 0.
*@str: This accepts pointer a argument
*/

void puts_half(char *str)
{
int length = strlen(str);

while (str[length] != '\0')
{
length++;
}
if (length % 2 != 0)
{
int n = (length - 1) / 2;
int i;

for (i = n; i < length - 1;  i++)
{
_putchar(str[i]);
}
_putchar(10);
}
else
{
int i;
int mid = length / 2;
for (i = mid; str[i] != '\0'; i++)
{
_putchar(str[i]);
}
_putchar(10);
}

}

