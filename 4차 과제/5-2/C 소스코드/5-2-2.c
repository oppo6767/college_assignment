#include <stdio.h>
#include "5-2.h"

elment stackempty() {
    if(top==NULL) {
        printf("stack is empty");
        return 0;
    }   
    return 1;
}
