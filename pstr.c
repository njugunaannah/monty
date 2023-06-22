#include "monty.h"
/**
 * f_pstr - Prints the string starting at the top of the stack,
 * followed by a new line.
 * @head: Double pointer to the head of the stack.
 * @counter: Current line number being executed.
 */

void f_pstr(stack_t **head, unsigned int counter)
{
	stack_t *x;
	(void)counter;

	x = *head;
	while (x)
	{
		if (x->n > 127 || x->n <= 0)
		{
			break;
		}
		printf("%c", x->n);
		x = x->next;
	}
	printf("\n");
}
