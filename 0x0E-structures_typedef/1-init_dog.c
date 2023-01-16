#include <stdlib.h>
#include "main.h"
#include "dog.h"

/**
*init_dog 
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
d = malloc(sizeof(struct init_dog));
if (d == NULL)
return (NULL);

d->name;
d->age;
d->owner;

return (d);
}
