#include "monty.h"
/**
 * push - function to add to the stack
 * @top: top of stack
 * @line_number: file line number
 * Return: void
 */
void f_push(stack_t **top, unsigned int line_num)
{
	int n, i = 0, flag = 0;

	if (bus.arg)
	{
		if (bus.arg[0] == '-')
			i++;
		for (; bus.arg[j] != '\0'; i++)
		{
			if (bus.arg[i] > 57 || bus.arg[i] < 48)
				flag = 1; }
		if (flag == 1)
		{ fprintf(stderr, "L%d: usage: push integer\n", line_num);
			fclose(bus.file);
			free(bus.content);
			free_stack(*top);
			exit(EXIT_FAILURE); }}
	else
	{ fprintf(stderr, "L%d: usage: push integer\n", line_num);
		fclose(bus.file);
		free(bus.content);
		free_stack(*top);
		exit(EXIT_FAILURE); }
	n = atoi(bus.arg);
	if (bus.lifi == 0)
		addnode(top, n);
	else
		addqueue(top, n);
}
/**
 * pall - function to print all values on stack
 * @top: top of the stack
 * @line_num: line number counter
 * Return: void
 */
void f_pall(stack_t **top, unsigned int line_num)
{
	stack_t *h;
	(void)line_num;

	h = *top;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
