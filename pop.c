#include "monty.h"

/* Function to remove the top element of the stack */
void pop(void) {
    if (stack == NULL) {
        fprintf(stderr, "L<line_number>: can't pop an empty stack\n");
        exit(EXIT_FAILURE);
    }

    stack_t *top = stack;
    stack = stack->next;

    if (stack != NULL)
        stack->prev = NULL;

    free(top);
}
