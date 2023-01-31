#include <stddef.h>
#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
* sum_listint - This function sums all the int data in
* a linked list
* @head: This accepts struct argument
* Return: sum of int data in the list
*/

int sum_listint(listint_t *head)
{
int sum = 0;
if (head == NULL)
return (0);

while (head)
{
sum += head->n;
head = head->next;
}

return (sum);
}
