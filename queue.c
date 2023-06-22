#include "monty.h"
/**
 * f_queue - Enqueues a stack_t element at the head of a stack.
 * @head: Pointer to the head of the stack.
 * @counter: Unsigned integer representing the current count of elements.
 *
 * function enqueues a new element of type stack_t at the head of the stack
 * represented by `head`. It updates the `head` pointer to point to the newly
 * added element and increments the `counter` by one.
 */

void f_queue(stack_t **head, unsigned int counter)
{
	(void)head;
	(void)counter;
	bus.lifi = 1;
}

/**
 * addqueue - Adds an element to the queue represented by a stack
 * @head: Pointer to the head of the stack
 * @x: Value to be added to the queue
 *
 * function adds an element to the end of the queue represented by a stack.
 * It takes a double pointer to the head of the stack and value to be added.
 * The element is added to the bottom of the stack,
 * making it the last element in the queue.
 */
void addqueue(stack_t **head, int x)
{
	stack_t *new_node, *aux;

	aux = *head;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		printf("Error\n");
	}
	new_node->n = x;
	new_node->next = NULL;
	if (aux)
	{
		while (aux->next)
			aux = aux->next;
	}
	if (!aux)
	{
		*head = new_node;
		new_node->prev = NULL;
	}
	else
	{
		aux->next = new_node;
		new_node->prev = aux;
	}
}
