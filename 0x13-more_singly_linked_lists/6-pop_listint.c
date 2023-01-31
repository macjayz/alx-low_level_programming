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
int n;

if (head == NULL)
return (0);

temp = *head;
if (temp == NULL)
return (0);

*head = (*head)->next;
n = temp->n;
free(temp);
return (n);
}
