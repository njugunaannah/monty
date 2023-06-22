#include "monty.h"
/**
 * f_pchar - Prints the character at the top of the stack.
 * @head: Double pointer to the top of the stack.
 * @counter: Current line number in the script.
 *
 * Description: This function prints the character at the top of the stack
 * if it exists. If the stack is empty, it prints an error message.
 * The counter parameter is used for error reporting.
 */

void f_pchar(stack_t **head, unsigned int counter)
{
	stack_t *k;

	k = *head;
	if (!k)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	if (k->n > 127 || k->n < 0)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", k->n);
}
