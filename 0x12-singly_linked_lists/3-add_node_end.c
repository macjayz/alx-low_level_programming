#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/**
 * add_node_end - adds a note at the end of linked list.
 * @head: The start of a list.
 *@str: string variable passed in main function.
 * Return: The number of nodes in h.
 */

list_t *add_node_end(list_t **head, const char *str)
{
list_t *new, *temp;
char *dup;
int i;

new = malloc(sizeof(list_t));
if (new == NULL)
return (NULL);

dup = strdup(str);
if (str == NULL)
{
free(new);
return (NULL);
}
for (i = 0; str[i] != '\0'; i++)
;

new->str = dup;
new->len = i;
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
