#include "main.h"
#include <stdio.h>
#include <string.h>

/**
* rev_string - This function prints a string
*
*Return: 0
*@s: This accepts int argument
*/

void rev_string(char *s)
{
int length = strlen(s);
int mid = length / 2;
char temp;
int i;
for (i = 0; i < mid; i++)
{
temp = s[i];
s[i] = s[length - i - 1];
s[length - i - 1] = temp;

}
}
