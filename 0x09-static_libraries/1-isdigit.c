#include "main.h"
#include <stdio.h>
/**
* _isdigit - This function checks for digit
*
*Return: 0
*@c: this receives integer value argument
*/

int _isdigit(int c)
{
if ((c >= 48) && (c <= 57))
return (1);


return (0);
}
