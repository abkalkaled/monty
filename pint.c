#include "monty.h"
/**
 * pint - prints the top element of the stack
 * @top: stack head
 * @line_number: line number
 * Return: void
 */
void pint(stack_t **top, int line_number)
{
    if (*top == NULL)
    {
        fprintf(stderr, "L%u: can't pint, stack empty\n", line_number);
        free(*top);
        exit(EXIT_FAILURE);
    }

    printf("%d\n", (*top)->n);
}
