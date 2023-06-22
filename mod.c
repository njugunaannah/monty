#include "monty.h"

/**
 * f_mod - Computes the modulo of the top two elements of a stack
 * @head: Double pointer to the head of the stack
 * @counter: The current line number in the script
 */
void f_mod(stack_t **head, unsigned int counter)
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
		fprintf(stderr, "L%d: can't mod, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	k = *head;
	if (k->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	aux = k->next->n % k->n;
	k->next->n = aux;
	*head = k->next;
	free(k);
}
