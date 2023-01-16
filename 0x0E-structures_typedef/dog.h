#ifndef DOG_H
#define DOG_H
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

typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
#endif
