#include <stddef.h>
#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
* add_nodeint_end - This function adds node to the end of
* a linked list
* @head: This accepts struct argument
* @n: This accepts number for node data
* Return: The address of the new node
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new, *temp;

new = malloc(sizeof(listint_t));
if (new == NULL)
return (NULL);

new->n = n;
new->next = NULL;
if (*head == NULL)
*head = new;
else
{
temp = *head;
while (temp->next != NULL)
temp = temp->next;
temp->next = new;
}

return (*head);

}
