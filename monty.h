#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <stdlib.h>

/* Struct for stack node */
typedef struct stack_s
{
    int n;
    struct stack_s *prev;
    struct stack_s *next;
} stack_t;

/* Function prototypes */
void push(int value);
void pall(void);
void pint(void);
void pop(void);
/* Add prototypes for other opcodes as needed */

/* Global variable for the stack */
extern stack_t *stack;

#endif /* MONTY_H */
