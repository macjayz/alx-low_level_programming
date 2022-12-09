#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
*main - Entry point
*
*Return: Always 0 (Success)
*/
int main(void)
{
int ch;
int num;
for (ch = 'a'; ch <= 'z'; ch++)
{
putchar(ch);
}
for (num = 'A'; num <= 'Z'; num++)
{
putchar(num);
}
putchar('\n');
return (0);
}
