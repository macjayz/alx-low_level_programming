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
char i;
for (i = '0'; i < '9'; i++)
{
if (i == c)
return (1);
}

return (0);
}
