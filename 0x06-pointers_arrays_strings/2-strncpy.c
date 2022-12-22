#include "main.h"



/**
 * _strcmp - compares two strings
 * @s1: the first string.
 * @s2: the second string.
 * Return: 0 if s1 and s2 are equals
 */



char *_strncpy(char *dest, char *src, int n)
{

int i;



	i = 0;

	while (i < n && *(src + i))

	{

		*(dest + i) = *(src + i);

		i++;

	}

	while (i < n)

	{

		*(dest + i) = '\0';

		i++;

	}

	return (dest);
}
