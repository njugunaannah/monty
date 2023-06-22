#include "monty.h"

/**
 * f_add - Adds a new element to the top of a stack
 * @head: Pointer to the head of the stack
 * @counter: Counter variable
 */

void f_add(stack_t **head, unsigned int counter)
{
	stack_t *x;
	int len = 0, aux;

	x = *head;
	while (x)
	{
		x = x->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	x = *head;
	aux = x->n + x->next->n;
	x->next->n = aux;
	*head = x->next;
	free(x);
}
