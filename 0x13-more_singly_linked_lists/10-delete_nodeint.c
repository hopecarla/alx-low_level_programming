#include "lists.h"
/**
 * delete_nodeint_at_index -  deletes the node at index of a linked list
 * @index: index of the node that should be deleted
 * @head: pointer to the first node
 * Return: 1 if it succedded or -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;

	listint_t *ptr = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	while (i < index - 1)
	{
		if (!temp || !(temp->next))
			return (-1);
		temp = temp->next;
		i++;
	}
	ptr = temp->next;
	temp->next = ptr->next;
	free(ptr);
	return (1);
}
