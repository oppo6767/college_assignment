#include <stdio.h>
#include "5-1.h"

elment stack_overflow(elment top) {
    if (top==size) {
        printf("stack overflow\n");
        return 0;
    }
    return 1;
}

elment stack_underflow(elment top) {
    if (top==-1) {
        printf("stack underflow\n");
        return 0;
    }
    return 1;
}

elment stackempty(elment top) {
    if(top==-1) {
        printf("stack is empty");
        return 0;
    }   
    return 1;
}
