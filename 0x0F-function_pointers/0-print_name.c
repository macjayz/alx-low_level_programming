#include <stdio.h>
#include "main.h"

/**
*print_name - Entry point
*@name: receives name argument
*@f: a pointer to a function passed as an argument
*Return: void
*/

void print_name(char *name, void (*f)(char *))
{
f(name);
}
