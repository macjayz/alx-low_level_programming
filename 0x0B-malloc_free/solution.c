#include "main.h"
#include <stdlib.h>
/**
* alloc_grid - create a matrix using malloc
* @width: width of the matrix
* @height: height of the matrix
*
* Return: return a pointer of pointer or null
*/

int **alloc_grid(int width, int height)
{
int i,j;
int **ptr;

if ((width || height) < 0)
return (NULL);

ptr =  malloc(sizeof(int *) * height);
if (ptr == NULL)
return (NULL);

for (i = 0; i < height; i++)
{
ptr[i] =malloc(sizeof(int) * width);
}

for (i = 0; i < height; i++)
{
for (j = 0; j < width; j++)
ptr[i][j] = 0;
}

return (ptr);
}
