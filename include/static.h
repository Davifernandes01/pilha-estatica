#ifndef STATIC_H
#define STATIC_H

#include <stdbool.h>
#include <stddef.h>

typedef struct _static_stack Static_stack;


Static_stack *create(size_t capacity);
void destroy(Static_stack **ref_static);

bool is_full(const Static_stack *stack);
bool is_empty(const Static_stack *stack);

void push(Static_stack stack, int val );
void peek(const Static_stack stack);
void pop(Static_stack stack);




#endif

