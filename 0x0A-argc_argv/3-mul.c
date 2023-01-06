#include <stdio.h>
#include <stdlib.h>
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
int first, second, result;
if (argc != 3)
{
printf("%s\n", "Error");
return (1);
}

first = atoi(argv[1]);
second = atoi(argv[2]);

result = first * second;
printf("%d\n", result);

return (0);
}

