#include "monty.h"
/**
 * push - function to add to the stack
 * @top: top of stack
 * @value: data stored
 * @line_number: file line number
 * Return: void
 */
void push(Node **top, int value, int line_number)
{
	Node *newNode = malloc(sizeof(Node));

	if (!value)
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}
	if (newNode == NULL)
	{
		fprintf(stderr, "Memory allocation error\n");
		exit(EXIT_FAILURE);
	}
	newNode->data = value;
	newNode->next = *top;
	*top = newNode;
}
/**
 * pall - function to print all values on stack
 * @top: top of the stack
 * Return: void
 */
void pall(Node *top)
{
	while (top != NULL)
	{
		printf("%d\n", top->data);
		top = top->next;
	}
}
