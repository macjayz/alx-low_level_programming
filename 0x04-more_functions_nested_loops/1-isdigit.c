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
int i;
for (i = 0; i < 10; i++)
{
printf("%d\n", i);
if (i == c)
printf("%d%d\n", i, c);
return (1);
}

return (0);
}
