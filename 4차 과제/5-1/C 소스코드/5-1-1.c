#include <stdio.h>
#include <stdlib.h>
#include "5-1.h"

elment top=-1;

void print_func() {
    printf("STACK[");
    for (int i = 0; i <= top; i++)
        printf("%d ", stack[i]);
    printf("]");
}

void push(elment item) {
    if (stack_overflow(top)==0) exit(1);
    else stack[++top]=item;
}

elment pop() {
    elment itme=0;
    if (stack_underflow(top)==0) exit(1);
    else return stack[top--];
}

elment peek() {
    if (stackempty(top)==0) exit(1);
    else return stack[top];
}