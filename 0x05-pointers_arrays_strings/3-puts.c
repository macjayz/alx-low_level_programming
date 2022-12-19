#include "main.h"
#include <stdio.h>


/**
* _puts - This counts length of string
*
* Return: Always 0.
*@str: This accepts pointer a argument
*/

void _puts(char *str)
{
int i = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
		_putchar(10);
}
