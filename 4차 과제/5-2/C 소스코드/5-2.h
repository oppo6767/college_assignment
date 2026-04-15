#pragma once

typedef int elment;

typedef struct stack {
    elment data;
    struct stack* link;
} stack;

stack* top;

void print_func();
void push(elment item);
elment pop();
elment peek();
elment stackempty();


