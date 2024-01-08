#include "lists.h"
#include <stddef.h>
#include <stdio.h>

int comp_list(listint_t *head, listint_t *cent, int len);
void rev_list(listint_t **head);
/**
 * is_palindrome - func checks palidrome lists
 *
 * @head: funct pointer
 *
 * Return: 0 if true else 1
 */

int is_palindrome(listint_t **head)
{
	int i = 1, len = 0;
	listint_t *cent;
	listint_t *copy;

	if (head == NULL || *head == NULL)
		return (1);
	copy = *head;
	cent = *head;
	for (; copy != NULL; len++)
		copy = copy->next;
	len = len/2;
	for (;i < len; i++)
		cent = cent ->next;
		     if (len % 2 != 0 && len != 1)
		     {
			     cent = cent->next;
			     len = len -1;
		     }

	rev_list(&cent);
	i = comp_list(*head, cent, len);
	return (i);
}
/**
 * rev_list - function reverses lists
 * @head: head pointer
 */
void rev_list(listint_t **head)
{
	listint_t *prev;
	listint_t *next;
	listint_t *current;

	if (head == NULL || *head == NULL)
		return;
	prev = NULL;
	current = *head;
	while(current != NULL)
	{
		next = current->next;
		current = prev;
		prev = current;
		current = next;
	}
	*head = prev;
}

/**
 * comp_list - compares lists
 * @len: list length
 * @head: points to node
 * @cent: pointer to middle node
 * @Return: 0 or 1
 */
int comp_list(listint_t *head, listint_t *cent, int len)
{
	int i = 1;

	if (head == NULL ||cent == NULL)
		return (1);
	for (;i < len; i++)
	{
		if (head->n != cent->n)
			return (0);
		head = head->next;
		cent = cent->next;
	}
	return (1);
}
