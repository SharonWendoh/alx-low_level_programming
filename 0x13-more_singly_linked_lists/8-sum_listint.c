#include "lists.h"
/**
 * sum_listint - adds all the data in the linked list
 *
 * @head: pointer to the first node of the ist
 *
 * Return: sum of the data
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
