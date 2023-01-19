#include <stdlib.h>
#include "function_pointers.h"

/**
*print_name - Entry point
*@name: receives name argument
*@f: a pointer to a function passed as an argument
*Return: void
*/

void print_name(char *name, void (*f)(char *))
{
if (!name || !f)
return;

f(name);
}
