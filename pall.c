#include "monty.h"

/* Func to print out all elem in the stack */
void pall(void) {
    stack_t *current = stack;

    while (current != NULL) {
        printf("%d\n", current->n);
        current = current->next;
    }
}
