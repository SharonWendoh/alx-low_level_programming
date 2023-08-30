#include "lists.h"
/**
 * add_nodeint - adds a node at the beginning of the list
 *
 * @head: head address of the list
 * @n: element to be added
 *
 * Return: address of the new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;

	return (*head);
}
