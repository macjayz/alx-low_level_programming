#include "main.h"
#include <stdio.h>
#include <string.h>

/**
*_strstr - This function prints a string
*
*Return: 0
*@haystack: This accepts char argument
*@needle: This accepts char argument
*/

char *_strstr(char *haystack, char *needle)
{

	while (*haystack)
	{

		char *src = haystack;
		char *sub = needle;

		while (*haystack && *sub && *haystack == *sub)
		{
			haystack++;
			sub++;
		}
		if (!*sub)
			return (src);
		haystack = src + 1;
	}
	return (0);
}
