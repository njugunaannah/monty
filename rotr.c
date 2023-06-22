#include "monty.h"
/**
 * f_rotr - Rotates the top element of a stack to the right.
 * @head: Pointer to the head of the stack.
 * @counter: Unused parameter (required by function signature).
 *
 * Description: This function rotates the top element of the stack to the
 * right by one position. The head pointer is updated to point to the new
 * top element after the rotation.
 * Note: The counter parameter is unused, but it's required by the function
 * signature to match the required format.
 */

void f_rotr(stack_t **head, __attribute__((unused)) unsigned int counter)
{
	stack_t *copy;

	copy = *head;
	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	while (copy->next)
	{
		copy = copy->next;
	}
	copy->next = *head;
	copy->prev->next = NULL;
	copy->prev = NULL;
	(*head)->prev = copy;
	(*head) = copy;
}
