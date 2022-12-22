#include "main.h"



/**
 * _strcmp - compares two strings
 * @s1: the first string.
 * @s2: the second string.
 * Return: 0 if s1 and s2 are equals
 */



int _strcmp(char *s1, char *s2)

{

	int i = 0, r = 0;



	while (r == 0)

	{

		if ((*(s1 + i) == '\0') && (*(s2 + i) == '\0'))



			break;

		r = *(s1 + i) - *(s2 + i);

		i++;

	}

	return (r);

}
