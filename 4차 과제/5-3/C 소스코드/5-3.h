#pragma once
#define stack_size 4

typedef char elment_1;
typedef int elment_2;

typedef struct stack {
    elment_1 data;
    struct stack* link;
} stack;

stack* top;

void push(elment_1 expression);
void pop();
elment_2 stack_underflow();
