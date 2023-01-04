#include "main.h"
#include <stdio.h>
#include <string.h>
#include <math.h>

/**
*_pow_recursion - Function prints x to the power of y
*
*Return: 0
*@x: This accepts an integer
*@y: This accepts an integer
*/

int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
else if (y == 0)
return (1);
return (x * _pow_recursion(x, y - 1));
}
