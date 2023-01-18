#include <stdio.h>
#include "function_pointers.h"

/**
*array_iterator - Entry point to print array
*@array: receives array argument
*@size: receives unsigned int size argument
*@action: a pointer to a function passed as an argument
*Return: void
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
if(!array || !size || !action)
return;

int i;
for (i = 0; i < size; i++)
{
(*action)(array[i]);
}
}
