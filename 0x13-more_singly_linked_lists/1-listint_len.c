#include <stddef.h>
#include "lists.h"
#include <stdio.h>

/**
* print_listint - This function prints the elements
* of linked list
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
