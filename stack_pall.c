#include "monty.h"
/**
 * f_pall - prints the entire stack
 * @head: stack head
 * @counter: no used
 * Return: no return
*/
void f_pall(stack_t **head, unsigned int counter)
{
	stack_t *k;
	(void)counter;

	k = *head;
	if (k == NULL)
		return;
	while (k)
	{
		printf("%d\n", k->n);
		k = k->next;
	}
}
