#include <stddef.h>
#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
* free_listint - This function adds node to the end of
* a linked list
* @head: This accepts struct argument
* Return: 0
*/

void free_listint2(listint_t **head)
{
listint_t *temp;
if (head == NULL)
return;

while (*head)
{
temp = *head;
*head = (*head)->next;
free(temp);
}

}
