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

void free_listint(listint_t *head)
{
listint_t *temp;
while(head)
{
temp = head->next;
free(head);
head = temp;
}

}
