#include "monty.h"
/**
 * f_rotl - Rotates the top element of the stack to the left.
 * @head: Double pointer to the head of the stack.
 * @counter: Unused parameter.
 *
 * Description: This function rotates the top element of the stack to the left,
 * moving it to the bottom of the stack. The @counter parameter is
 * not used in this function.
 */

void f_rotl(stack_t **head,  __attribute__((unused)) unsigned int counter)
{
	stack_t *tmp = *head, *aux;

	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	aux = (*head)->next;
	aux->prev = NULL;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = *head;
	(*head)->next = NULL;
	(*head)->prev = tmp;
	(*head) = aux;
}
