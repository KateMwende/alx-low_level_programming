#include <stdlib.h>
#include "lists.h"
/**
 * add_dnodeint - adds a node at the beginning of a list
 * @head: double pointer to the head of a list
 * @n: the element to add to the new node
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL || head == NULL)
		return (NULL);
	new->n = n;

	new->next = *head;
	new->prev = NULL;

	*head = new;

	return (new);
}