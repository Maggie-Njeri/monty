#include "monty.h"

/**
 * f_div - divides the top two elements of the stack.
 * @head: is the beginning of the stack
 * @counter: is the line number
 * Return: nothing
*/

void f_div(stack_t **head, unsigned int counter)
{
	stack_t *s;
	int len = 0, aux;

	s = *head;
	while (s)
	{
		s = s->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	s = *head;
	if (s->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	aux = s->next->n / s->n;
	s->next->n = aux;
	*head = s->next;
	free(s);
}
