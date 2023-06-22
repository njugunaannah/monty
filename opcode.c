#include "monty.h"
/**
 * f_pop - Removes the top element from the stack.
 * @head: Double pointer to the head of the stack.
 * @counter: Number of elements in the stack.
 *
 * This function removes the top element from the stack and updates the head
 * pointer accordingly. The counter is decremented to reflect the removal.
 */

void f_pop(stack_t **head, unsigned int counter)
{
	stack_t *k;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	k = *head;
	*head = k->next;
	free(k);
}
