#include "main.h"



/**
 * _strncpy - compares two strings
 * @dest: the first string.
 * @src: the second string.
 * @n: third integer argument.
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
