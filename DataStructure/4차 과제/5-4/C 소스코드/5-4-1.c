#include <stdlib.h>
#include "5-4.h"

void push(elment_1 expression, elment_2 x) {
    stack* new_stack=(stack*)malloc(sizeof(stack));
    if (x==0) new_stack->data=expression-'0';
    else new_stack->data=x;
    new_stack->link=top;
    top=new_stack;
}

elment_2 pop(elment_1 expression) {
    elment_2 result;
    if(stack_underflow()) {
        switch (expression) {
        case '*':
            result=pop_expression(expression);
            push(0, result);
            return 0;
        case '/':
            result=pop_expression(expression);
            push(0, result);
            return 0;
        case '-':
            result=pop_expression(expression);
            return result;    
        }
    }
    else exit(1);
}

