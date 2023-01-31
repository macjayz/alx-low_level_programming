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

void free_listint(listint_t *head)
{
listint_t *temp;
while (head)
{
temp = head->next;
free(head);
head = temp;
}

}
