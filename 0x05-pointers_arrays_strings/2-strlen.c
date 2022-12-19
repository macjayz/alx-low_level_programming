#include "main.h"
#include <stdio.h>


/**
* _strlen - This counts length of string
*
* Return: Always 0.
*@s: This accepts pointer a argument
*/

int _strlen(char *s)
{
int i = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		i += 1;
	}
return (i);
}
