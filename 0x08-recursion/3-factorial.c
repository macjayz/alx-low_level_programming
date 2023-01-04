#include "main.h"
#include <stdio.h>
#include <string.h>

/**
*factorial - Function prints the factorial of a number
*
*Return: 0
*@n: This accepts number of factorial
*/

int factorial(int n)
{
if (n < 0)
return (-1);

else if (n == 0)
return (1);

else
return (n * factorial(n - 1));
}
