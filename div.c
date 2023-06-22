#include "monty.h"

/**
 * f_div - Divides the second element of the stack by the top element.
 * @head: Double pointer to the top of the stack.
 * @counter: The current line number.
 */
void f_div(stack_t **head, unsigned int counter)
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
		fprintf(stderr, "L%d: can't div, stack too short\n", counter);
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
	aux = k->next->n / k->n;
	k->next->n = aux;
	*head = k->next;
	free(k);
}
