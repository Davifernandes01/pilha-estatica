#ifndef STATIC_H
#define STATIC_H

#include <stdbool.h>


typedef struct _static_stack Static_stack;


Static_stack *create(long capacity);
void destroy(Static_stack **ref_static);

bool is_full(const Static_stack *stack);
bool is_empty(const Static_stack *stack);

void push(Static_stack *stack, int val );
int peek(const Static_stack *stack);
int pop(Static_stack *stack);

void stack_print(const Static_stack *stack);
long size(const Static_stack *stack);




#endif

