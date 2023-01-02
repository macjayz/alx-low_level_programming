#include "main.h"
#include <stdio.h>
#include <string.h>

/**
*_strpbrk - This function prints a string
*
*Return: 0
*@s: This accepts char argument
*@accept: This accepts char argument
*/

char *_strpbrk(char *s, char *accept)

{
	int i, k;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (k = 0; accept[k] != '\0'; k++)

		{
			if (s[i] == accept[k])
				return (s + i);
		}
	}
	return (0);
}
