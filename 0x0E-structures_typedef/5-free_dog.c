#include <stdio.h>
#include "dog.h"

/**
*free_dog - Dog struct function
*@d: the struct variable to be intialized
*/

void free_dog(dog_t *d)
{
if (d != NULL)
{
free(d->name);
free(d->owner);
free(d);
}
}
