#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
*malloc_checked - This function checks for malloc
*
*@Return: 0
*@b: This accepts int argument
*/

void *malloc_checked(unsigned int b)

{

	void *p;



	p = malloc(b);

	if (p == NULL)

		exit(98);



	return (p);

}
