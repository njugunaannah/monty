#include "monty.h"
/**
 * f_mul - multiplies the two elements at the top of the stack.
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void f_mul(stack_t **head, unsigned int counter)
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
		fprintf(stderr, "L%d: can't mul, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	k = *head;
	aux = k->next->n * k->n;
	k->next->n = aux;
	*head = k->next;
	free(k);
}
