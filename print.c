#include "monty.h"

/* Function to print the value at the top of the stack */
void pint(void) {
    if (stack == NULL) {
        fprintf(stderr, "L<line_number>: can't pint, stack empty\n");
        exit(EXIT_FAILURE);
    }

    printf("%d\n", stack->n);
}
