#include "main.h"

/**
*_isupper - This function checks for uppser case characters
*Return: 0
*@c: This variables accepts argument value from the main function
*/

int _isupper(int c)
{
char ch;
for (ch = 'A'; ch <= 'Z'; ch++)
{
if (c == ch)
{
return (1);
}

}
return (0);
}
