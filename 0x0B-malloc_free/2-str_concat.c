#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
*str_concat - This function concatenates strings
*Return: 0
*@s1: This accepts pointer argument
*@s2: This accepts the second pointer argument
*/

char *str_concat(char *s1, char *s2)
{
int size1, size2, length, i, j;
char *mal;

if (s1 == NULL)
size1 = 1;
else if (s2 == NULL)
size2 = 1;
else 
{
size1 = strlen(s1);
size2 = strlen(s2);
length = size1 + size2;

mal = malloc(sizeof(char) * (length + 1));
if (!mal)
return (NULL);

for (i = 0; i < size1; i++)
{
mal[i] = s1[i];
}

for (j = 0; j < size2; j++, i++)
{
mal[i] = s2[j];
}

mal[i] = '\0';
}

if (!mal)
return (NULL);

return (mal);
}


