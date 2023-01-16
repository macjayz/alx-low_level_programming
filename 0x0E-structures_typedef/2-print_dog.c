#include <stdio.h>
#include "dog.h"

/**
*print_dog - Dog struct function
*@d: the struct variable to be intialized
*/

void print_dog(struct dog *d)
{
if (d == NULL)
return;

if (d->name == NULL)
printf("(nil)");
else
printf("name: %s\n", d->name);

if (d->age < 0)
printf("(nil)");
else
printf("age: %f\n", d->age);

if (d->owner == NULL)
printf("(nil)");
else
printf("owner: %s\n", d->owner);

}
