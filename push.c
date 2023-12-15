#include "monty.h"

/* Global var declar */
stack_t *stack = NULL;

/* Func to push an elm into the stuckk */
void push(int value) {
    stack_t *new_node = malloc(sizeof(stack_t));
    if (new_node == NULL) {
        fprintf(stderr, "Error: malloc failed\n");
        exit(EXIT_FAILURE);
    }

    new_node->n = value;
    new_node->prev = NULL;
    new_node->next = stack;

    if (stack != NULL)
        stack->prev = new_node;

    stack = new_node;
}

