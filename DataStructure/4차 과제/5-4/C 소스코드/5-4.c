#include <stdio.h>
#include <stdlib.h>
#include "5-4.h"

int main() {
    top=NULL;
    elment_2 result;
    elment_1 expression[]="35*62/-";

    for (int i = 0;expression[i]!='\0';i++) {
        switch (expression[i]) {
        case '*':
            pop(expression[i]);
            continue;
        case '/':
            pop(expression[i]);
            continue;
        case '-':
            result=pop(expression[i]);
            continue;
        default:
            push(expression[i], 0);
            continue;
        }
    }
    
    printf("후위 표기식:%s\n", expression);
    printf("연산 결과=> %d", result);
    return 0;
}