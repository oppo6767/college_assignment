#include <stdio.h>
#include "5-3.h"

elment_2 stack_underflow() {
    if (top==NULL) {
        printf("stack underflow");
        return 0;
    }
    return 1;
}
