#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
* binary_to_uint - converts a binary number to an unsigned int
* @b: binary number
*
* Return: 0 or converted number
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0;
	int i, len;

	if (b == NULL)
		return (0);

	len = strlen(b);

	for (i = 0; i != len; i++)
	{
		if (b[len - i - 1] == '1')
			n += 1 << i;
		else if (b[len - i - 1] != '0')
			return (0);
	}

	return (n);
}

