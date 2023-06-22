#include "monty.h"

/**
 * f_swap - Swaps the top two elements of a stack.
 * @head: Pointer to the head of the stack.
 * @counter: Current counter value.
 * Function swaps the top two elements of a stack. It takes a double pointer
 * to the head of the stack to allow modifying of stack's contents. The counter
 * parameter is used to track the current position in the stack.
 */
void f_swap(stack_t **head, unsigned int counter)
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
		fprintf(stderr, "L%d: can't swap, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	k = *head;
	aux = k->n;
	k->n = k->next->n;
	k->next->n = aux;
}
