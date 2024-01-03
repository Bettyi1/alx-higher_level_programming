#include <stdlib.h>
#include<unistd.h>
#include<stdio.h>
#include "lists.h"
/**
 * insert_node - funtion sorts lists
 *
 * @head: function  par
 *
 * @number: values
 *
 * Return: pointer, or NULL
 */
listint_t *insert_node(listint_t **head, int number)
{
	listint_t *val1 = *head;
	listint_t *val2 = NULL;
	listint_t *temp_val = NULL;

	val2 = malloc(sizeof(listint_t));
	if (!head)
		return (NULL);
	if (!val2)
		return (NULL);
	val2->n = number;
	val2->next = NULL;
	if ((*head)->n > number || !head)
	{
		val2->next = *head;
		return (*head = val2);
	}
	else
	{
		while (val1 && val1->n < number)
		{
			temp_val = val1;
			val1 = val1->next;
		}
		temp_val->next = val2;
		val2->next = val1;
	}
	return (val1);
}
