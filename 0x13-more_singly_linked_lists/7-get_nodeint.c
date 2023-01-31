#include <stddef.h>
#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
* get_nodeint_at_index - This function returns number of node of
* a linked list at nth index
* @head: This accepts struct argument
* @index: This accept nth index
* Return: number of node struct
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
int i = 0;
listint_t *temp;

if (i > index)
return (NULL);

if (head == NULL)
return (NULL);

temp = head;

while (i < index)
{
temp = temp->next;
i++;
}

if (temp == NULL)
return (NULL);

return (temp);
}
