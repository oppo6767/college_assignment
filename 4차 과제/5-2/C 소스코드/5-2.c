#include <stdio.h>
#include "5-2.h"

int main() {
    elment item;
    top=NULL;
    printf("**연결 스택 연산**\n");
    
    print_func();
    printf("\n");

    push(1);
    print_func();
    printf("\n");

    push(2);
    print_func();
    printf("\n");

    push(3);
    print_func();
    printf("\n");

    item=peek();
    print_func();
    printf("\t peek => %d\n", item);


    item=pop();
    print_func();
    printf("\t pop => %d\n", item);

    item=pop();
    print_func();
    printf("\t pop => %d\n", item);

    item=pop();
    print_func();
    printf("\t\t pop => %d\n", item);
    return 0;
}