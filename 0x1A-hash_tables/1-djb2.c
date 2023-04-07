#include "hash_tables.h"

/**
 * hash_djb2 - Hash function implementing the djb2 algorithm.
 * @str: The string to hash.
 *
 * Return: The calculated hash.
 */
unsigned long int hash_djb2(const unsigned char *str)
{
    unsigned long int hash = 5381;
    int c;

    for (size_t i = 0; str[i]; i++)
    {
        c = str[i];
        hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
    }

    return hash;
}

