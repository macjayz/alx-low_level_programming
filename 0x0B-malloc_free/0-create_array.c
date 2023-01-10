#include "main.h"
#include <stdlib.h>

/**
*create_array - This function creates an array
*Return: 0
*@size: this accepts int argument of size
*@c: This accepts char argument
*/

char *create_array(unsigned int size, char c)
{
unsigned int i;
char *arr;
if (size == 0)
return (NULL);

arr = malloc(sizeof(char) * size);

for (i = 0; i < size; i++)
{
arr[i] = c;
}

if (arr)
return (arr);
else
return (NULL);
}
