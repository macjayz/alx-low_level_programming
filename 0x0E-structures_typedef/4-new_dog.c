#include <stdio.h>
#include <string.h>
#include "dog.h"

/**
*new_dog - Dog struct function
*@name: the struct variable to be intialized
*@age: age argument
*@owner: owner argument
*Return: new_dog
*/

dog_t *new_dog(char *name, float age, char *owner);

dog_t *new_dog(char *name, float age, char *owner)
{

dog_t *dog;
if (name == NULL || age < 0 || owner == NULL)
return (NULL);

dog = malloc(sizeof(dog_t));
if (dog == NULL)
{
return (NULL);
}

dog->name = malloc(sizeof(char) * (strlen(name) + 1));
if (!dog->name)
{
free(dog);
return (NULL);
}

dog->owner = malloc(sizeof(char) * (strlen(owner) + 1));
if (!dog->owner)
{
free(dog);
return (NULL);
}

dog->name = strcpy(dog->name, name);
dog->age = age;
dog->owner = strcpy(dog->owner, owner);

return (dog);
}
