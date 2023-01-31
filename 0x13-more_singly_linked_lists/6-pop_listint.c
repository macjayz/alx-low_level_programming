#include <stddef.h>
#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
* pop_listint - This function pops the head node of
* a linked list
* @head: This accepts struct argument
* Return: items left in the head node
*/

int pop_listint(listint_t **head)
{
listint_t *temp;

if (head == NULL)
return (0);

temp = *head;

return (temp->n);
}
