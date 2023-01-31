#include <stddef.h>
#include "lists.h"
#include <stdio.h>

/**
* listint_len - This function prints the number of
* elements in a linked list
* @h: This accepts struct argument
* Return: Unsigned int
*
*/

size_t listint_len(const listint_t *h)
{
size_t count = 0;
while (h)
{
if (h != NULL)
{
count++;
}
h = h->next;
}

return (count);
}
