#include "monty.h"
void push(Node** top, int value, int line_number)
{
	Node* newNode = malloc(sizeof(Node));

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
void pall(Node* top)
{
	while (top != NULL)
	{
		printf("%d\n", top->data);
		top = top->next;
	}
}
