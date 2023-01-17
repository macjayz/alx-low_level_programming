#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
*malloc_checked - This function checks for malloc
*
*Return: void
*@b: This accepts int argument
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
int i, j, k, l, length;
char *mal;
if (s1 == NULL)
s1 = "";

if (s2 == NULL)
s2 = "";

for (i = 0; s1[i] != '\0'; i++)
{
s1[i];
}

for (j = 0; s2[j] != '\0'; j++)
{
s2[j];
}

length = i + j;

mal = maloc(sizeof(char) * (length + 1); 

if (mal == NULL)
return (NULL);

for (k = 0; k < n && s2[k]; k++, i++)
{
;
}
return ();
}
