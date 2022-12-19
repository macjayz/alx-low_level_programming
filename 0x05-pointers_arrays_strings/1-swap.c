#include "main.h"
#include <stdio.h>


/**
* swap_int - This swaps the integer values of a and b
*
* Return: Always 0.
*@a: This accepts pointer a argument
*@b: This accepts pointer b argument
*/

void swap_int(int *a, int *b)
{

int c;
c = *a;
*a = *b;
*b = c;
}
