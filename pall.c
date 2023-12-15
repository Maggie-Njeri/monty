#include "monty.h"

/**
 * f_pall - prints the whole stack, top to bottom
 * @head: is the beginning of the stack
 * @counter: not used
 * Return: nothing
 **/

void f_pall(stack_t **head, unsigned int counter)
{
	stack_t *s;
	(void)counter;

	s = *head;
	if (s == NULL)
		return;
	while (s)
	{
		printf("%d\n", s->n);
		s = s->next;
	}
}
