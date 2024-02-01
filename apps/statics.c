#include "static.h"
#include <stdio.h>



int main(){


Static_stack *stack = create(5);

push(stack, 10);
push(stack, 9);
push(stack, 120);
push(stack, 50);




stack_print(stack);

 printf("number: %ld\n", size(stack));


pop(stack);

stack_print(stack);

   printf("number: %d\n", peek(stack));

    return 0;
}

