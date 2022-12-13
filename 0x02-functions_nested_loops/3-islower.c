#include "main.h"
/**
*_islower - This function checks for lower case alphabets
*
*Return: Always 0 (Success)
*
*@c: This varibales receives al integer value from the main.c
*/
int _islower(int c)
{
int i = 'a';
while (i <= 'z')
{
if (c != i)
{
i++;
}
else
{
return (1);
}
}
return (0);
}

