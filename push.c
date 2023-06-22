#include "monty.h"

/**
 * f_push - Pushes a new element to the top of the stack.
 * @head: Pointer to the head of the stack.
 * @counter: The value to be pushed onto the stack.
 *
 * This function adds a new element with the value 'counter' to the top of
 * the stack pointed to by 'head'.
 */
void f_push(stack_t **head, unsigned int counter)
{
	int x, y = 0, flag = 0;

	if (bus.arg)
	{
		if (bus.arg[0] == '-')
			y++;
		for (; bus.arg[y] != '\0'; y++)
		{
			if (bus.arg[y] > 57 || bus.arg[y] < 48)
				flag = 1; }
		if (flag == 1)
		{ fprintf(stderr, "L%d: usage: push integer\n", counter);
			fclose(bus.file);
			free(bus.content);
			free_stack(*head);
			exit(EXIT_FAILURE); }}
	else
	{ fprintf(stderr, "L%d: usage: push integer\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE); }
	x = atoi(bus.arg);
	if (bus.lifi == 0)
		addnode(head, x);
	else
		addqueue(head, x);
}
