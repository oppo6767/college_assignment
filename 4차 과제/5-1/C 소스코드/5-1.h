#pragma once

#define size 3 //배열 크기

typedef int elment;
elment stack[size];

void print_func();
void push(elment item);
elment pop();
elment stack_overflow(elment top);
elment stack_underflow(elment top);
elment peek();
elment stackempty(elment top);


