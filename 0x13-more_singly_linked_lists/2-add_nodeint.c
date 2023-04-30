#include "lists.h"

/**
 * add_nodeint - A function adds new node at the beginning
 * @head: The first node in the list
 * @n: data to insert in that new node
 * Return: Returns the value new
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
