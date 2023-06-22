#include "monty.h"
/**
 * f_pall - prints the entire stack
 * @head: stack head
 * @counter: no used
 * Return: no return
*/
void f_pall(stack_t **head, unsigned int counter)
{
	stack_t *x;
	(void)counter;

	x = *head;
	if (x == NULL)
		return;
	while (x)
	{
		printf("%d\n", x->n);
		x = x->next;
	}
}
