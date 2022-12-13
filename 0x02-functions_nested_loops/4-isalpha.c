#include "main.h"
/**
*_isalpha - This checks for alphabets both lower case and upper case
*
*Return: Always 0 (Success)
*
*@c: This receives an integer value argument from the main.c
*/
int _isalpha(int c)
{
int lower = 'a';
int upper = 'A';
while (lower <= 'z')
{
while (upper <= 'Z')
{
if (c != upper)
{
upper++;
}
else
{
return (1);
}
}
if (c != lower)
{
lower++;
}
else
{
return (1);
}
}
return (0);
}

