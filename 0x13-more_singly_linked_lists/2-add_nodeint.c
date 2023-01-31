#include <stddef.h>
#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
* add_nodeint - This function adds node to
* a linked list
* @head: This accepts struct argument
* @n: This accepts number for node data
* Return: Unsigned int
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new;

new = malloc(sizeof(listint_t));
if (new == NULL)
return (NULL);

if (*head == NULL)
*head = new;
else
{
new->n = n;
new->next = *head;
*head = new;
}
if(*head == NULL)
return (NULL);

return (*head);

}
