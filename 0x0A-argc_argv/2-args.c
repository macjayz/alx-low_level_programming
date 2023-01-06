#include <stdio.h>
#include "main.h"

/**
*main - Entry point
*
*Return: 0
*@argc: first integer argument
*@argv: second integer argument
*/

int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}

