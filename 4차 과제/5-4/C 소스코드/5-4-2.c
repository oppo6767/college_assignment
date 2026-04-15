#include <stdio.h>
#include <stdlib.h>
#include "5-4.h"

elment_2 stack_underflow() {
    if (top==NULL) {
        printf("stack underflow");
        return 0;
    }
    return 1;
}

elment_2 pop_expression(elment_1 expression) {
    stack* temp1;
    stack* temp2;
    elment_2 result;

    if (expression=='*')
        result=(top->link->data)*(top->data);
    else if (expression=='/')
        result=(top->link->data)/(top->data);
    else
        result=(top->link->data)-(top->data);

    temp1=top;
    temp2=top->link;

    if (top->link->link==top) top=NULL;
    else top=top->link->link;

    free(temp1);
    free(temp2);

    return result;
}
