#include "main.h"
#include <stdio.h>


/**
* print_rev - This print reversed string
*
* Return: Always 0.
*@str: This accepts pointer a argument
*/

void print_rev(char *str)
{
int i = 0;



	while (str[i] != 0)

	{

		i++;

	}

	while (i > 0)

	{

		i--;

		_putchar(str[i]);

	}
		_putchar(10);
}
