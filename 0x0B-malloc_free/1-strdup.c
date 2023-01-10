#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
*_strdup - This function creates a string from array
*Return: 0
*@str: This accepts pointer argument
*/

char *_strdup(char *str)
{
int size = strlen(str);
int i;
char *mal;

mal = malloc(sizeof(char) * size);
if (!mal)
return (NULL);

for (i = 0; i < size; i++)
{
mal[i] = *(str + i);
}

return (mal);
}

