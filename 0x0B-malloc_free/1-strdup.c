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
if (*str == NULL)
return (NULL);

mal = malloc(sizeof(char) * (size + 1));
if (!mal)
return (NULL);

for (i = 0; i < (size); i++)
{
mal[i] = *(str + i);
}

return (mal);
}

