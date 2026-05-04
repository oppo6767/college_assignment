#include <stdio.h>
#include <stdlib.h>
#include "5-3.h"

int main() {
    top=NULL;
    elment_1 expression[]="{(A+b)-3}*5+[{cos(x+y)+7}-1]*4";

    for (int i = 0;expression[i]!='\0';i++) {
        switch (expression[i]) {
        case '{':
            push(expression[i]);
            continue;
        case '}':
            pop();
            continue;
        case '(':
            push(expression[i]);
            continue;
        case ')':
            pop();
            continue;
        case '[':
            push(expression[i]);
            continue;
        case ']':
            pop();
            continue;
        }
    }
    printf("%s\n", expression);
    if (top==NULL) printf("수식의 괄호가 맞게 사용되었습니다!");
    return 0;
}