#include <stdio.h>
#include <stdlib.h>
#include "5-2.h"

void print_func() {
    stack* p=top;
    printf("STACK[");
    while (p) {
        printf("%d ", p->data);
        p=p->link;
    }
    printf("]");
}

void push(elment item) {
    stack* new_stack=(stack*)malloc(sizeof(stack));
    new_stack->data=item;
    new_stack->link=top;
    top=new_stack;
}

elment pop() {
    stack* pop_stack=top;
    if (stackempty()==0) exit(1);
    else {
        int item=pop_stack->data;
        top=pop_stack->link;
        pop_stack=NULL;
        free(pop_stack);
        return item;
    }
}

elment peek() {
    if (stackempty()==0) exit(1);
    else return top->data;
}