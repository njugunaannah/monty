#include "monty.h"

/**
 * free_stack - Frees all nodes in a stack.
 * @head: Pointer to the head of the stack.
 *
 * This function frees all the nodes in a stack,
 * starting from the head node and moving to the
 * subsequent nodes.
 */

void free_stack(stack_t *head)
{
	stack_t *aux;

	aux = head;
	while (head)
	{
		aux = head->next;
		free(head);
		head = aux;
	}
}
