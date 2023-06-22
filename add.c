#include "monty.h"

/**
 * f_add - Adds a new element to the top of a stack
 * @head: Pointer to the head of the stack
 * @counter: Counter variable
 */

void f_add(stack_t **head, unsigned int counter)
{
	stack_t *k;
	int len = 0, aux;

	k = *head;
	while (k)
	{
		k = k->next;
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
	k = *head;
	aux = k->n + k->next->n;
	k->next->n = aux;
	*head = k->next;
	free(k);
}
