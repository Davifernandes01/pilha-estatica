#include "static.h"
#include <stdlib.h>
#include <stdio.h>


typedef struct _static_stack{

    int *data;
    long capacity;
    long top;

}Static_stack;

Static_stack *create(long capacity){

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


//adciona um elemento na pilha
void push(Static_stack *stack, int val ){

    if(is_full(stack)){

        fprintf(stderr, "ERROR in 'push'\n");
        fprintf(stderr, "stack is full\n");
        exit(EXIT_FAILURE);

    }
    stack->top++;
    stack->data[stack->top] = val;
}

//returna o ultimo elemento da pilha(sem retirar ele)
int peek(const Static_stack *stack){

    if(is_empty(stack)){

        fprintf(stderr, "ERROR in 'peek'\n");
        fprintf(stderr, "stack is empty\n");
        exit(EXIT_FAILURE);

    }
    return stack->data[stack->top];
}


//tira o ultimo elemento da pilha
int pop(Static_stack *stack){

    if(is_empty(stack)){

        fprintf(stderr, "ERROR in 'pop'\n");
        fprintf(stderr, "stack is empty\n");
        exit(EXIT_FAILURE);

    }

    int val = stack->data[stack->top];
    stack->top--;


    return val;
}

void stack_print(const Static_stack *stack){

    printf("capacity: %ld\n", stack->capacity);
    printf("top: %d\n", stack->data[stack->top]);

    for(long i = 0; i <= stack->top; i++){

        printf("%d ", stack->data[i]);

    }

    puts("\n");
}

//mostra o tamanho da pilha
long size(const Static_stack *stack){

    return stack->top +1;
}
