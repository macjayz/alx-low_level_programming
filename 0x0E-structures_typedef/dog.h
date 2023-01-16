#include <stdlib.h>

/**
*struct dog - main struct function
*@name: this accepts char argument
*@age: this accepts float argument
*@owner: this accepts char argument
*
*Description: Longer description
*/

struct dog
{
char *name;
float age;
char *owner;
};

struct dog *my_dog(char *name, float age, char *owner)
{
struct dog *dog;
dog = malloc(sizeof(struct dog));

dog->name = name;
dog->age = age;
dog->owner = owner;

return (dog);

}
