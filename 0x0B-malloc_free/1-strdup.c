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
int size, i;
char *mal;

if (str == NULL)
return (NULL);

for (size = 0; str[size] != '\0'; size++)
;

mal = malloc(sizeof(char) * (size + 1));

if (mal == NULL)
return (NULL);

for (i = 0; str[i] != '\0'; i++)
{
mal[i] = *(str + i);
}
mal[i] = '\0';

return (mal);
}

