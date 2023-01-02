#include "main.h"
#include <stdio.h>
#include <string.h>

/**
*set_string - This function prints a string
*
*Return: 0
*@s: This accepts char argument of double pointer
*@to: This accepts char argument of a pointer
*/

void set_string(char **s, char *to)
{
	*s = to;
}
