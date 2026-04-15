#include <stdlib.h>
#include "5-3.h"

void push(elment_1 expression) {
    stack* new_stack=(stack*)malloc(sizeof(stack));
    new_stack->data=expression;
    new_stack->link=top;
    top=new_stack;
}

void pop() {
    stack* temp=top;
    if(stack_underflow()) {
        top=temp->link;
        temp->link=NULL;
        free(temp);
    }
    else exit(1);
}

