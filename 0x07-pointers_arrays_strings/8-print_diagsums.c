#include "main.h"
#include <stdio.h>
#include <string.h>

/**
*print_diagsums - This function prints a string
*
*Return: 0
*@a: This accepts char argument
*@size: Accepts size argument
*/
void print_diagsums(int *a, int size)
{
	int i;
	int c = 0;
	int d = 0;

	for (i = 0; i < size; i++)
	{
		c += a[i];
		d += a[size - i - 1];
		a += size;
	}
	printf("%d, ", c);
	printf("%d\n", d);
}
