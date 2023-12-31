#include "monty.h"
/**
 * f_pstr - Prints the string starting at the top of the stack,
 * followed by a new line.
 * @head: Double pointer to the head of the stack.
 * @counter: Current line number being executed.
 */

void f_pstr(stack_t **head, unsigned int counter)
{
	stack_t *k;
	(void)counter;

	k = *head;
	while (k)
	{
		if (k->n > 127 || k->n <= 0)
		{
			break;
		}
		printf("%c", k->n);
		k = k->next;
	}
	printf("\n");
}
