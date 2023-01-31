#include <stddef.h>
#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
* insert_nodeint_at_index - This function inserts node at nth
* index of a linked list
* @head: This accepts struct argument
* @idx: This accept nth index
* @n: This accepts int value for node data;
* Return: number of node struct
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *new, *temp;
unsigned int i = 0;

new = malloc(sizeof(listint_t));
new->n = n;
new->next = NULL;

if (new == NULL)
return (NULL);

if (*head == NULL)
return (NULL);

temp = *head;

if (i > idx)
return (NULL);

while (i < idx)
{
temp = temp->next;
i++;
}
new->next = temp->next;
temp->next = new;

return (new);
}
