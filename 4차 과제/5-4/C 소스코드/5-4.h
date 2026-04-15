#pragma once
#define stack_size 4

typedef char elment_1;
typedef int elment_2;

typedef struct stack {
    elment_2 data;
    struct stack* link;
} stack;

stack* top;

void push(elment_1 expression, elment_2 x);
elment_2 pop(elment_1 expression);
elment_2 stack_underflow();
elment_2 pop_expression(elment_1 expression);
