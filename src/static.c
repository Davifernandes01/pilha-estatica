#include "static.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>


typedef struct _static_stack{

    int *data;
    size_t capacity;
    int top;

}Static_stack;

Static_stack *create(size_t capacity){

    Static_stack *stack = (Static_stack*) calloc(1, sizeof(Static_stack));

    stack->capacity = capacity;
    stack->top = -1;
    stack->data = (int *) calloc(stack->capacity, sizeof(int));


    return stack;
}

void destroy(Static_stack **ref_static){

    Static_stack *aux = *ref_static;

    free(aux->data);
    free(aux);

    *ref_static = NULL;

}


bool is_full(const Static_stack *stack){

    return stack->top == stack->capacity -1;

}

bool is_empty(const Static_stack *stack){

    return stack->top == -1;
}